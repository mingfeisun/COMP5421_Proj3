#include "singviewmodel.h"
#include <string.h>
#include <stdio.h>

singviewmodel::singviewmodel(const QString& fileName)
{
    FILE* data_in;
    data_in=fopen((fileName+QString(".van")).toStdString().c_str(), "rb");
    if(data_in != NULL){
        fread(points, sizeof(hPoint), 3*4, data_in);
        genVP(0); genVP(1); genVP(2);
        genVPL();
    }
    else{
        for(int i=0; i<3; i++){
            vp[i] = new hPoint();
        }
    }

    memset(this->homo_H, 0, sizeof(this->homo_H));
    memset(this->map_H, 0, sizeof(this->map_H));
}

void singviewmodel::genVP(int ind)
{
    this->vp[ind] = new hPoint((this->points[ind][0]*this->points[ind][1])*
            (this->points[ind][2]*this->points[ind][3]));
    this->vp[ind]->unif();
}

void singviewmodel::genVPL()
{
    this->vpline = new hPoint((*(this->vp[0]))*(*(this->vp[1])));
}

void singviewmodel::comp3DPos()
{
    return;
}

void singviewmodel::compTexMap()
{
    return;
}
