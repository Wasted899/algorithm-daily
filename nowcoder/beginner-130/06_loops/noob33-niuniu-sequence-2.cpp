#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    double H;
    cin >> n;
    for (int i = 1 ; i <= n; i++){
        H = H+1.0/i;
    }
    cout << fixed << setprecision(6) << H << '\n' ;
    return 0;
}