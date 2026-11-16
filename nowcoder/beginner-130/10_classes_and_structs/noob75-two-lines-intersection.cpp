#include <bits/stdc++.h>
using namespace std;

struct point {
    double x, y;
    point(double A, double B) {
        x = A, y = B;
    }
    point() = default;
};

struct line {
    point point_A, point_B;
    line(point A, point B) {
        point_A = A, point_B = B;
    }
    line() = default;
};

point findMeetingPoint(line line_A, line line_B) {
     // 1. 把直线 A 的两个点坐标提出来
    double x1 = line_A.point_A.x;
    double y1 = line_A.point_A.y;
    double x2 = line_A.point_B.x;
    double y2 = line_A.point_B.y;
    
    // 2. 把直线 B 的两个点坐标提出来
    double x3 = line_B.point_A.x;
    double y3 = line_B.point_A.y;
    double x4 = line_B.point_B.x;
    double y4 = line_B.point_B.y;

    // 3. 算直线 A 的 A1, B1, C1
    double A1 = y1 - y2;
    double B1 = x2 - x1;
    double C1 = x1 * y2 - x2 * y1;

    // 4. 算直线 B 的 A2, B2, C2
    double A2 = y3 - y4;
    double B2 = x4 - x3;
    double C2 = x3 * y4 - x4 * y3;

    // 5. 算行列式 D
    double D = A1 * B2 - A2 * B1;

    // 6. 如果 D 是 0（或者极其接近0，浮点数精度问题），说明没有唯一交点
    if (abs(D) < 1e-9) {
        return point(-1, -1);
    }

    // 7. 套公式算交点 x 和 y
    double x = (B1 * C2 - B2 * C1) / D;
    double y = (C1 * A2 - C2 * A1) / D;

    return point(x, y);
}

int main() {
    point A, B, C, D;
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;
    line AB = line(A, B);
    line CD = line(C, D);
    point ans = findMeetingPoint(AB, CD);
    cout << fixed << setprecision(12) << ans.x << " " << ans.y;
    return 0;
}