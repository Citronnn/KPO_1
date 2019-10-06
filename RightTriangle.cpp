
#include "RightTriangle.h"

RightTriangle::RightTriangle(double x, double y, double a) : Shape(x,y), side(a){
    pts.push_back({cent.x,cent.y+a*sqrt(3)/3});
    pts.push_back({cent.x-a/2,cent.y-a*sqrt(3)/6});
    pts.push_back({cent.x+a/2,cent.y-a*sqrt(3)/6});
}

void RightTriangle::changeSize(double k){
    forSize(k);
    side*=k;
}

void RightTriangle::print(std::ostream& out){
    out<<"Сторона "<< side<<"\n";
}
