#ifndef HPOINT_H
#define HPOINT_H

class hPoint
{
public:
    double x, y, w;

    hPoint();
    hPoint(double x, double y);
    hPoint(double x, double y, double w);
    void unif();
};

hPoint operator+(const hPoint lhs, const hPoint rhs);
hPoint operator*(const hPoint lhs, const hPoint rhs);

#endif // HPOINT_H
