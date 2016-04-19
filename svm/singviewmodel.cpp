#include "singviewmodel.h"
#include <string.h>
#include <stdio.h>
#include "eigen.h"

singviewmodel::singviewmodel(const QString& fileName):
    ref_height(0), row(0), col(0)
{
    memset(homo_H, 0, sizeof(homo_H));
    memset(map_H, 0, sizeof(map_H));

    FILE* data_in;
    data_in=fopen((fileName+QString(".van")).toStdString().c_str(), "rb");
    if(data_in != NULL){
        fread(&ref_height, sizeof(double), 1, data_in);
        fread(&origin, sizeof(hPoint), 1, data_in);
        fread(vp, sizeof(hPoint), 3, data_in);
        fread(points, sizeof(hPoint), 3*4, data_in);
        fread(ref_points, sizeof(hPoint), 4, data_in);
        calcHomoH();
    }
}

void singviewmodel::genVP(int ind)
{
    hPoint* temp = new hPoint((this->points[ind][0]*this->points[ind][1])*
            (this->points[ind][2]*this->points[ind][3]));
    vp[ind].x = temp->x;
    vp[ind].y = temp->y;
    vp[ind].w = temp->w;
    vp[ind].unif();
}

void singviewmodel::genOrigin()
{
    hPoint* temp = new hPoint((this->points[0][0]*this->points[0][1])*
            (this->points[1][0]*this->points[1][1]));
    origin.x = temp->x;
    origin.y = temp->y;
    origin.w = temp->w;
    origin.unif();
    origin.x = (int)origin.x;
    origin.y = (int)origin.y;
}

void singviewmodel::calcHomoH()
{
    float** A = (float**)malloc(8*sizeof(float*));
    for(int i=0; i<8; i++){
        A[i] = (float*)malloc(9*sizeof(float));
        memset(A[i], 0, 9*sizeof(float));
    }

    int ind = 0;
    for(int m=0; m<2; m++){
        for(int n=0; n<2; n++){
            A[2*ind][0] = ref_points[ind].x;
            A[2*ind][1] = ref_points[ind].y;
            A[2*ind][2] = 1;
            A[2*ind][6] = -points[m][n].x * ref_points[ind].x;
            A[2*ind][7] = -points[m][n].x * ref_points[ind].y;
            A[2*ind][8] = -points[m][n].x;

            A[2*ind+1][3] = ref_points[ind].x;
            A[2*ind+1][4] = ref_points[ind].y;
            A[2*ind+1][5] = 1;
            A[2*ind+1][6] = -points[m][n].y * ref_points[ind].x;
            A[2*ind+1][7] = -points[m][n].y * ref_points[ind].y;
            A[2*ind+1][8] = -points[m][n].y;
            ind++;
        }
    }

    FILE* log=fopen("test.txt", "w");

    fprintf(log, "A\n");
    for(int i=0; i<8; i++){
        for(int j=0; j<9; j++){
            fprintf(log, "%.1f\t", A[i][j]);
        }
        fprintf(log, "\n");
    }

    float** AtA = (float**)malloc(9*sizeof(float*));
    float** eigen_vector = (float**)malloc(9*sizeof(float*));
    for(int i=0; i<9; i++){
        AtA[i] = (float*)malloc(9*sizeof(float));
        eigen_vector[i] = (float*)malloc(9*sizeof(float));
        memset(AtA[i], 0, 9*sizeof(float));
        memset(eigen_vector[i], 0, 9*sizeof(float));
    }

    float* eigen_value = (float*)malloc(9*sizeof(float));
    memset(eigen_value, 0, 9*sizeof(float));

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            float sum=0;
            for(int k=0; k<8; k++){
                sum += A[k][i]*A[k][j];
            }
            AtA[i][j] = sum;
        }
    }

    fprintf(log, "\n\nAtA\n");
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            fprintf(log, "%.1f\t", AtA[i][j]);
        }
        fprintf(log, "\n");
    }

    eig_sys(9, AtA, eigen_vector, eigen_value);

    fprintf(log, "\n\nEigen vector\n");
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            fprintf(log, "%f\t", eigen_vector[i][j]);
        }
        fprintf(log, "\n");
    }

    fprintf(log, "\n\nEigen value\n");
    for(int i=0; i<9; i++){
        fprintf(log, "%f\t", eigen_value[i]);
    }

    float mini=1<<20;
    short index=0;
    for(int i=0; i<9; i++){
        if(mini > eigen_value[i]){
            mini=eigen_value[i];
            index=i;
        }
    }

    short seq=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            homo_H[i][j] = eigen_vector[index][seq++];
        }
    }

    fprintf(log, "\n\nHomo H\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            fprintf(log, "%lf\t", homo_H[i][j]);
        }
        fprintf(log, "\n");
    }

    fprintf(log, "\n\nTest\n");
    for(int i=0; i<4; i++){
        fprintf(log, "%lf\t", (homo_H[0][0]*ref_points[i].x + homo_H[0][1]*ref_points[i].y + homo_H[0][2])/
                (homo_H[2][0]*ref_points[i].x + homo_H[2][1]*ref_points[i].y + homo_H[2][2]));
        fprintf(log, "%lf\t", (homo_H[1][0]*ref_points[i].x + homo_H[1][1]*ref_points[i].y + homo_H[1][2])/
                (homo_H[2][0]*ref_points[i].x + homo_H[2][1]*ref_points[i].y + homo_H[2][2]));
        fprintf(log, "\n");
    }
    fprintf(log, "%lf\t", (homo_H[0][2])/(homo_H[2][2]));
    fprintf(log, "%lf\t", (homo_H[1][2])/(homo_H[2][2]));
    fprintf(log, "\n");

    fclose(log);
}

void singviewmodel::getCoeff()
{
    alpha = formula(origin, points[2][0], vp[2], genVPL(vp[0], vp[1]))/ref_height;
}

hPoint singviewmodel::genVPL(hPoint vp1, hPoint vp2)
{
    hPoint* vpline = new hPoint(vp1*vp2);
    double len = abs_hp(*vpline);
    double x = vpline->x/len;
    double y = vpline->y/len;
    double w = vpline->w/len;
    return hPoint(x, y, w);
}

void singviewmodel::comp3DPos(int x, int y)
{
    hPoint* curr_vp = new hPoint((points[2][0]*hPoint(x, y))*(vp[0]*vp[1]));
    hPoint* base_p = new hPoint((vp[2]*hPoint(x,y)) * (*curr_vp*origin));
    X_3d = homo_H[0][0]*base_p->x + homo_H[0][1]*base_p->y + homo_H[0][2];
    Y_3d = homo_H[1][0]*base_p->x + homo_H[1][1]*base_p->y + homo_H[1][2];
    Z_3d = formula(*base_p, hPoint(x, y), vp[2], genVPL(vp[0], vp[1]))/alpha;
}

void singviewmodel::compTexMap()
{
    return;
}

double singviewmodel::formula(hPoint b, hPoint t, hPoint vp, hPoint vp_line)
{
    return -abs_hp(b*t)/(dot(vp_line, b)*abs_hp(vp*t));
}
