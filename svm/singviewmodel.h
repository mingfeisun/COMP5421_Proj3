#ifndef SINGVIEWMODEL_H
#define SINGVIEWMODEL_H
#include <QPoint>
#include <QObject>
#include "hpoint.h"
#include "svminfo.h"

class hPoint;
class svmInfo;

class singviewmodel
{

public:
    singviewmodel(const QString& fileName);
    void genVP(int);
    void genVPL();
    void comp3DPos();
    void compTexMap();

    int img_width, img_height;
    int row, col;
    hPoint* vp[3];
    hPoint* vpline;
    hPoint points[3][4];
    double homo_H[3][3], map_H[3][4];
};

#endif // SINGVIEWMODEL_H
