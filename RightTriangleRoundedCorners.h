#ifndef RIGHTTRIANGLEROUNDEDCORNERS_H
#define RIGHTTRIANGLEROUNDEDCORNERS_H

#include "headers.h"
#include "RightTriangle.h"

class RightTriangleRoundedCorners: virtual public RightTriangle{
public:
    RightTriangleRoundedCorners(double x=0, double y=0, double a=0, double r=0);

    void changeSize(double k) override;

    void print(std::ostream& out) override;

protected:
    double radiusCircle;
};
#endif