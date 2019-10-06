#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H
#include "Shape.h"

class RightTriangle : virtual public Shape{
public:
    RightTriangle(double x = 0, double y = 0, double a = 0);

    void changeSize(double k) override;

    void print(std::ostream& out) override;

protected:
    double side;
};
#endif