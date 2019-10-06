
#include "Shape.h"

void Shape::changePos(double x, double y){
    for(auto& it: pts){
        it.x+=x - cent.x;
        it.y+=y - cent.y;
    }
    cent.x=x;
    cent.y=y;
}

void Shape::forSize(double& k){
    if(k<0){
        k=fabs(k);
    }
    cent.x*=k;
    cent.y*=k;
    for(auto& it: pts){
        it.x*=k;
        it.y*=k;
    }
}

void Shape::changeAngle(int deg){
    ang+=deg;
    ang%=360;
    double rad=ang*M_PI/180;
    for(auto& it: pts){
        double tmpx=it.x*cos(rad)-it.y*sin(rad);
        double tmpy=it.y*cos(rad)+it.x*sin(rad);
        it.x=tmpx;
        it.y=tmpy;
    }
}

void Shape::changeColour(short r, short g, short b){
    col={r,g,b};
}

void Shape::forPrint(std::ostream& out){
    out<<"Центр. коорд. "<<cent.x<<" "<<cent.y<<std::endl;
    out<<"Угол поворота "<<ang<<std::endl;
    out<<"Точки "<<std::endl;
    int count=0;
    for(const auto& it: pts){
        count++;
        out<<count<<") ("<<it.x<<", "<<it.y<<")\n";
    }
    out<<"Цвет "<<col.r<<" "<<col.g<<" "<<col.b<<std::endl;
}