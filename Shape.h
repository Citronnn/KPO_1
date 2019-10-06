#ifndef SHAPE_H
#define SHAPE_H

#include "headers.h"
class Shape{
public:
    Shape(double x = 0, double y = 0):ang(0), cent(x,y), col(0,0,0){}

    virtual void changePos(double x, double y);

    virtual void forSize(double& k);

    virtual void changeSize(double k) = 0;

    virtual void changeAngle(int deg);

    virtual void changeColour(short r, short g, short b);

    virtual void forPrint(std::ostream& out);

    virtual void print(std::ostream& out) = 0;

    friend std::ostream& operator<<(std::ostream& out, Shape& sh){
        sh.forPrint(out);
        sh.print(out);
        return out;
    }
    virtual ~Shape(){}

protected:
    Point cent;
    int ang;
    Colour col;
    std:: vector<Point> pts;
};
#endif