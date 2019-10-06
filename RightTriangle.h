#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H
#include "Shape.h"

class RightTriangle : virtual public Shape{
public:
	RightTriangle() = default;
    RightTriangle(double x, double y, double a);

    void changeSize(double k) override;

    void print(std::ostream& out) override;

protected:
    double side;
};
#endif