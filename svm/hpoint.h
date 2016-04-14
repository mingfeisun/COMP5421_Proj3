#ifndef HPOINT_H
#define HPOINT_H

class hPoint
{
public:
    double x, y, w;

    hPoint(double x, double y, double w);
    hPoint operator+=(const hPoint* rhs);
    hPoint operator*(const hPoint* rhs);
    hPoint unif();
};

#endif // HPOINT_H
