#ifndef TRIANGLETEXT_H
#define TRIANGLETEXT_H

#include "Text.h"
#include "RightTriangle.h"
#include "headers.h"
class TriangleText : virtual public Text, virtual public RightTriangle{
public:
    TriangleText(double x = 0, double y = 0, double a = 0, const std::string& newText = "", int newFontSize = 0);

    void changeSize(double k);

    void print(std::ostream& out);
};
#endif