#include "headers.h"
#include "Point.h"
#include "Colour.h"
#include "Shape.h"
#include "RightTriangle.h"
#include "RightTriangleRoundedCorners.h"
#include "Text.h"
#include "TriangleText.h"

int main(){


    TriangleText tr(0,0,5,"qweqweqweqweqwe", 8);
    std::cout<<tr;
    std::cout<<"цйуйцуйцуцу\n";
    RightTriangle trs(0,0,5);
    std::cout<<trs;
    // std::cout<<"-----------\n";
    // std::cout<<"Triangle\n";
    // std::cout<<"-----------\n";

    // RightTriangleRoundedCorners trs(0,0,5,6);
    // std::cout<<trs;


    // RightTriangle tr(0,0,4);
    // std::cout<<tr;
    // tr.changeAngle(180);
    // std::cout<<tr;
    // tr.changeAngle(90);
    // std::cout<<tr;

    // std::cout<<"-----------\n";
    // std::cout<<"Ellipse\n";
    // std::cout<<"-----------\n";
    // Ellipse e(0,0,2,1);
    // std::cout<<e;

    // std::cout<<"-----------\n";
    // std::cout<<"Edited Ellipse\n";
    // std::cout<<"-----------\n";
    // e.changeAngle(90);
    // e.changeColour(5,77,133);
    // e.changePos(4,5);
    // e.changeSize(3);
    // std::cout<<e;

    return 0;
}