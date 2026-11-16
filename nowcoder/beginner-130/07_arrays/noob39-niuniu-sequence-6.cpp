#include <bits/stdc++.h>
using namespace std;
int a[40];

int main() {
    int n;
    cin >> n;

    a[1] = 0;
    a[2] = 1;
    a[3] = 1;

    for (int i = 4 ; i <= n ; i++){
        a[i] = a[i-3] + 2*a[i-2] + a[i-1];
    }
    cout << a[n] << '\n' ;
    return 0;
}