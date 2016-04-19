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

private:
    double alpha, beta, gama;
    double formula(hPoint b, hPoint t, hPoint vp, hPoint vp_line);
    hPoint genVPL(hPoint vp1, hPoint vp2);

public:
    singviewmodel(const QString& fileName);
    void genVP(int);
    void genOrigin();
    void calcHomoH();
    void getCoeff();
    void comp3DPos();
    void compTexMap();

    int img_width, img_height;
    int row, col;
    double ref_height;
    hPoint origin;
    hPoint vp[3];
    hPoint points[3][4];
    hPoint ref_points[4];
    double homo_H[3][3], map_H[3][4];
};

#endif // SINGVIEWMODEL_H
