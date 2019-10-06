
#include "RightTriangleRoundedCorners.h"

RightTriangleRoundedCorners::RightTriangleRoundedCorners(double x, double y, double a, double r) : RightTriangle(x,y,a), radiusCircle(r){
    pts.clear();
    if (r < a*sqrt(3)/3) {
    	//верх
        pts.push_back({cent.x + r*sqrt(3)/2, cent.y + a*sqrt(3)/3 - 3*r/2});
        pts.push_back({cent.x - r*sqrt(3)/2, cent.y + a*sqrt(3)/3 - 3*r/2});
        pts.push_back({cent.x, cent.y + a*sqrt(3)/3 - r});
        //лево низ
        pts.push_back({cent.x - a/2 + r*sqrt(3), cent.y - a*sqrt(3)/6});
        pts.push_back({cent.x - a/2 + r*sqrt(3)/2, cent.y - a*sqrt(3)/6 + 3*r/2});
        pts.push_back({cent.x - a/2 + r*sqrt(3)/2, cent.y - a*sqrt(3)/6 + r/2});
        //право низ
        pts.push_back({cent.x + a/2 - r*sqrt(3), cent.y - a*sqrt(3)/6});
        pts.push_back({cent.x + a/2 - r*sqrt(3)/2, cent.y - a*sqrt(3)/6 + 3*r/2});
        pts.push_back({cent.x + a/2 - r*sqrt(3)/2, cent.y - a*sqrt(3)/6 + r/2});
    }
    else {
		pts.push_back({cent.x - r*sqrt(3)/2, cent.y + r/2});
		pts.push_back({cent.x + r*sqrt(3)/2, cent.y + r/2});
		pts.push_back({cent.x, cent.y - r});
    }
}

void RightTriangleRoundedCorners::changeSize(double k){
    forSize(k);
    side*=k;
}

void RightTriangleRoundedCorners::print(std::ostream& out){
    out<<"Радиус окружности сглаживания "<< radiusCircle<<"\n";
}