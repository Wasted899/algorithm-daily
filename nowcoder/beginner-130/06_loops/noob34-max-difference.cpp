#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    cin >> a;
    int max=a,min=a;
    for (int i = 0;i<n-1;i++){
        cin >> a;
        if (a > max){
            max = a;
        }
        if (a < min){
            min = a;
        }
    }
    cout << max - min ;
    return 0;
}