#include "TriangleText.h"

TriangleText::TriangleText(double x, double y, double a, const std::string& newText, int newFontSize) : Shape(x,y){
	side = a;
	pts.push_back({cent.x,cent.y+a*sqrt(3)/3});
    pts.push_back({cent.x-a/2,cent.y-a*sqrt(3)/6});
    pts.push_back({cent.x+a/2,cent.y-a*sqrt(3)/6});
	text = newText;
	fontSize = newFontSize;
	length = text.length();
}

void TriangleText::changeSize(double k){
	forSize(k);
    side*=k;
    fontSize*=k;
}

void TriangleText::print(std::ostream& out){
	out << "Сторона треугольника " << side<<"\n";
	out<<"Длина текста "<< length<<"\n";
	out<<"Размер шрифта "<< fontSize<<"\n";
	out<<"Текст "<< text<<"\n";
}