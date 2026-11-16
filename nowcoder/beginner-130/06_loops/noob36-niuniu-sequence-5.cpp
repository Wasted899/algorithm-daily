#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a=1,b=1,c=0;
    cin >> n;
    if (n == 1 || n == 2){
        b=a;
    }
    else{
        for (int i = 1 ; i <= n-2 ; i++){
            c=a+b;
            a=b;
            b=c;
    }
    }
    cout << b << '\n';
}