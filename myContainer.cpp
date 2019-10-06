#include "headers.h"
#include "Point.h"
#include "Colour.h"
#include "Shape.h"
#include "RightTriangle.h"
#include "RightTriangleRoundedCorners.h"
#include "Text.h"
#include "TriangleText.h"

int main(){
    RightTriangle rt(0,0,5);
    // rt.changeAngle(180);
    std::cout<<"Правильный треугольник: \n"<<rt;

    RightTriangleRoundedCorners rtrc(0,0,5,1);
    std::cout<<"Правильный треугольник со сглаженными углами:\n"<<rtrc;

    Text t(0,0,"Фигура - текст:", 0);
    std::cout<<"Текст:\n"<<t;

    TriangleText tt(0,0,5,"Текст в треугольнике", 0);
    std::cout<<"Текст  в треугольнике:\n"<<tt;

    return 0;
}