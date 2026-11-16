#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,S;
    cin >> n;
    for (int i = 1 ; i <= n ; i++){
        S=S+pow(-1,i-1)*i;
    }
    cout << S << endl;
    return 0;
}