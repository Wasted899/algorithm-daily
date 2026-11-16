#include <bits/stdc++.h>
using namespace std;

int main() {
    double K;
    cin >> K;
    double C,F;
    C = K - 273.15;
    F = C*1.8 + 32;
    cout << F << endl;
    return 0;
}