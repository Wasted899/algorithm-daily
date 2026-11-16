#include <bits/stdc++.h>
using namespace std;

struct point{
    double x,y;
    point(double A,double B){
        x=A,y=B;
    }
    point() = default;
};

struct line{
    point point_A,point_B;
    line(point A,point B){
        point_A = A,point_B = B;
    }
    line() = default;
};

struct Circle{
    point O;
    int r;
    Circle(point A,int B){
        O=A,r=B;
    }
    Circle() = default;
};

double getDistance(const Circle& circle, const line& l) {
    double x1 = l.point_A.x;
    double y1 = l.point_A.y;
    double x2 = l.point_B.x;
    double y2 = l.point_B.y;
    
    double x0 = circle.O.x;
    double y0 = circle.O.y;
    double r = circle.r;
    
    // 1. 算出 A, B, C
    double A = y2 - y1;
    double B = x1 - x2;
    double C = x2 * y1 - x1 * y2;
    
    // 2. 算分子：A*x0 + B*y0 + C 的绝对值
    double numerator = abs(A * x0 + B * y0 + C);
    
    // 3. 算分母：A^2 + B^2 开根号
    double denominator = sqrt(A * A + B * B);
    
    // 4. 返回距离
    double point_to_line = numerator / denominator;

    // 5.利用勾股定理求两点间距离
    double distance = sqrt(pow(r,2)-pow(point_to_line,2))*2.0;

    return distance;
}