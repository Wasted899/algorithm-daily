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

double getDistance(point P, line L){
    // 把数据提出来，少写点 L.point_A.x 这种长句子
    double x1 = L.point_A.x;
    double y1 = L.point_A.y;
    double x2 = L.point_B.x;
    double y2 = L.point_B.y;
    
    double x0 = P.x;
    double y0 = P.y;
    
    // 1. 算出 A, B, C
    double A = y2 - y1;
    double B = x1 - x2;
    double C = x2 * y1 - x1 * y2;
    
    // 2. 算分子：A*x0 + B*y0 + C 的绝对值
    double numerator = abs(A * x0 + B * y0 + C);
    
    // 3. 算分母：A^2 + B^2 开根号
    double denominator = sqrt(A * A + B * B);
    
    // 4. 返回距离
    return numerator / denominator;
}