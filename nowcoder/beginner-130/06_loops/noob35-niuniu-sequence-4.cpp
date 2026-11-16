#include <iostream>
using namespace std;

int main() {
    int n,S=0,s=0;
    cin >> n;
    for (int i = 1 ; i <= n ; i++){
        s += i;
        S += s;
    }
    cout << S << '\n';
}