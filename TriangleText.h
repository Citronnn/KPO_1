#ifndef TRIANGLETEXT_H
#define TRIANGLETEXT_H

#include "Text.h"
#include "RightTriangle.h"
#include "headers.h"
class TriangleText : virtual public Text, virtual public RightTriangle{
public:
	TriangleText() = default;
    TriangleText(double x, double y, double a, const std::string& newText, int newFontSize);

    void changeSize(double k);

    void print(std::ostream& out);
};
#endif