#include "hpoint.h"

hPoint::hPoint(double x=0, double y=0, double w=1)
{
    this->x=x;
    this->y=y;
    this->w=w;
}

hPoint *hPoint::operator+=(const hPoint *rhs)
{
    double x=this->x/this->w + rhs->x/rhs->w;
    double y=this->y/this->w + rhs->y/rhs->w;
    return hPoint(x, y);
}

hPoint *hPoint::operator*(const hPoint *rhs)
{
    double x=this->y*rhs->w - rhs->y*this->w;
    double y=this->w*rhs->x - rhs->w*this->x;
    double w=this->x*rhs->y - rhs->x*this->y;
    return hPoint(x,y,w);
}

hPoint hPoint::unif()
{
    this->x=this->x/this->w;
    this->y=this->y/this->w;
    this->w=1;
}
