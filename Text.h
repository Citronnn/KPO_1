#ifndef TEXT_H
#define TEXT_H
#include <string>
#include "headers.h"
#include "Shape.h"

class Text : virtual public Shape{
public:
	Text() = default;
    Text(double x, double y, const std::string& text, int fontSize);

    void changeSize(double k);

    void print(std::ostream& out);
    ~Text() = default;

protected:
    std::string text;
    std::size_t length;
    int fontSize;
};
#endif