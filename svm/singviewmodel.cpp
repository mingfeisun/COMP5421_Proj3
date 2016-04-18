#include "singviewmodel.h"
#include <string.h>
#include <stdio.h>

singviewmodel::singviewmodel(const QString& fileName):
    ref_height(0), row(0), col(0)
{
    FILE* data_in;
    data_in=fopen((fileName+QString(".van")).toStdString().c_str(), "rb");
    if(data_in != NULL){
        fread(&ref_height, sizeof(double), 1, data_in);
        fread(&origin, sizeof(hPoint), 1, data_in);
        fread(vp, sizeof(hPoint), 3, data_in);
        fread(points, sizeof(hPoint), 3*4, data_in);
        fread(ref_points, sizeof(hPoint), 4, data_in);
    }
    memset(homo_H, 0, sizeof(homo_H));
    memset(map_H, 0, sizeof(map_H));
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

void singviewmodel::getCoeff()
{
//    alpha = formula(points[0][0], points[0][1], vp[0], genVPL(vp[1], vp[2]))/dis[0];
//    beta = formula(points[1][0], points[1][1], vp[1], genVPL(vp[0], vp[2]))/dis[1];
//    gama = formula(points[2][0], points[2][1], vp[2], genVPL(vp[0], vp[1]))/dis[2];
    return;
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

void singviewmodel::comp3DPos()
{
    return;
}

void singviewmodel::compTexMap()
{
    return;
}

double singviewmodel::formula(hPoint b, hPoint t, hPoint vp, hPoint vp_line)
{
    return -abs_hp(b*t)/(dot(vp_line, b)*abs_hp(vp*t));
}
