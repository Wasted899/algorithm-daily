#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1,x2,y1,y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    double E = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    double M = abs(x1-x2)+abs(y1-y2);
    double DERTA = fabs(M-E);
    cout << fixed << setprecision(10) << DERTA;
    return 0;
}