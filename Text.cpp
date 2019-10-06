#include "Text.h"

Text::Text(double x, double y, const std::string& text, int fontSize) : Shape(x,y), text(text), fontSize(fontSize){
	length = text.length();
}

void Text::changeSize(double k){
    fontSize*=k;
}

void Text::print(std::ostream& out){
    out<<"Длина текста "<< length<<"\n";
    out<<"Размер шрифта "<< fontSize<<"\n";
    out<<"Текст "<< text<<"\n";
}