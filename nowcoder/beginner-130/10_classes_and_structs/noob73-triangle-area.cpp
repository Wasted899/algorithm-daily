#include <bits/stdc++.h>
using namespace std;

struct point{
    double x,y;
    point(double A,double B){
        x=A,y=B;
    }
    point() = default;
};

struct triangle{
    point a,b,c;
    triangle(point A,point B,point C){
        a=A,b=B,c=C;
    }
    triangle() = default;
};

double getArea(triangle T){
    double x1 = T.a.x;
    double y1 = T.a.y;
    double x2 = T.b.x;
    double y2 = T.b.y;
    double x3 = T.c.x;
    double y3 = T.c.y;

    double S = 0.5*abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    return S;
}