#ifndef SINGVIEWMODEL_H
#define SINGVIEWMODEL_H
#include <QPoint>
#include <QObject>
#include "hpoint.h"

class hPoint;

class singviewmodel
{
public slots:
    void getPoint(char, int, int);

private:
    int x_ind;
    int y_ind;
    int z_ind;

    void genVP(char);
    void genVPL();
    void comp3DPos();
    void compTexMap();

public:
    singviewmodel();

    int img_width, img_height;

    hPoint *vpx, *vpy, *vpz, *vpline;
    hPoint points[3][4];
    double homo_H[3][3], map_H[3][4];

};

#endif // SINGVIEWMODEL_H
