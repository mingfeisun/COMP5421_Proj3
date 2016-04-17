#ifndef HPOINT_H
#define HPOINT_H

class hPoint
{
public:
    hPoint();
    hPoint(double x, double y);
    hPoint(double x, double y, double w);
    void unif();

    double x, y, w;
};

hPoint operator+(const hPoint lhs, const hPoint rhs);
hPoint operator*(const hPoint lhs, const hPoint rhs);
double abs_hp(const hPoint rhs);
double dot(const hPoint lhs, const hPoint rhs);

#endif // HPOINT_H
