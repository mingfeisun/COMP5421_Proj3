#include "singleviewmodel.h"
#include <string.h>

singviewmodel::singviewmodel()
{
    this->x_ind=0;
    this->y_ind=0;
    this->z_ind=0;
    memset(this->homo_H, 0, sizeof(this->homo_H));
    memset(this->map_H, 0, sizeof(this->map_H));
}

void singviewmodel::genVP(char flag)
{
    switch(flag){
    case 'x':
        this->vpx = new hPoint((this->points[0][0]*this->points[0][1])*
                (this->points[0][2]*this->points[0][3]));
        break;
    case 'y':
        this->vpy = new hPoint((this->points[1][0]*this->points[1][1])*
                (this->points[1][2]*this->points[1][3]));
        break;
    case 'z':
        this->vpz = new hPoint((this->points[2][0]*this->points[2][1])*
                (this->points[2][2]*this->points[2][3]));
        break;
    }
}

void singviewmodel::genVPL()
{
    this->vpline = new hPoint((*(this->vpx))*(*(this->vpy)));
}

void singviewmodel::comp3DPos()
{
    return;
}

void singviewmodel::compTexMap()
{
    return;
}

void singviewmodel::getPoint(char flag, int x, int y)
{
    switch(flag){
    case 'x':
        this->points[0][this->x_ind].x=x;
        this->points[0][this->x_ind++].y=y;
        this->x_ind=this->x_ind%4;
    case 'y':
        this->points[1][this->y_ind].x=x;
        this->points[1][this->y_ind++].y=y;
        this->y_ind=this->y_ind%4;
    case 'z':
        this->points[2][this->z_ind].x=x;
        this->points[2][this->z_ind++].y=y;
        this->z_ind=this->z_ind%4;
    }
    return;
}
