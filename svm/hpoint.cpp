#include "hpoint.h"
#include <math.h>

hPoint::hPoint()
{
    this->x=0;
    this->y=0;
    this->w=1;
}

hPoint::hPoint(double x, double y)
{
    this->x=x;
    this->y=y;
    this->w=1;
}

hPoint::hPoint(double x, double y, double w)
{
    this->x=x;
    this->y=y;
    this->w=w;
}

void hPoint::unif()
{
    this->x=this->x/this->w;
    this->y=this->y/this->w;
    this->w=1;
}


hPoint operator+(const hPoint lhs, const hPoint rhs)
{
    double x = lhs.x/lhs.w + rhs.x/rhs.w;
    double y = lhs.y/lhs.w + rhs.y/rhs.w;
    return hPoint(x, y);
}


hPoint operator*(const hPoint lhs, const hPoint rhs)
{
    double x = lhs.y*rhs.w - rhs.y*lhs.w;
    double y = lhs.w*rhs.x - rhs.w*lhs.x;
    double w = lhs.x*rhs.y - rhs.x*lhs.y;
    return hPoint(x,y,w);
}


double abs_hp(const hPoint rhs)
{
    return sqrt(dot(rhs, rhs));
}


double dot(const hPoint lhs, const hPoint rhs)
{
    return lhs.x*rhs.x + lhs.y*rhs.y + lhs.w*rhs.w;
}
