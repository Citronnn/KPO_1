#ifndef RIGHTTRIANGLEROUNDEDCORNERS_H
#define RIGHTTRIANGLEROUNDEDCORNERS_H

#include "headers.h"
#include "RightTriangle.h"

class RightTriangleRoundedCorners: virtual public RightTriangle{
public:
	RightTriangleRoundedCorners() = default;
    RightTriangleRoundedCorners(double x, double y, double a, double r);

    void changeSize(double k) override;

    void print(std::ostream& out) override;

protected:
    double radiusCircle;
};
#endif