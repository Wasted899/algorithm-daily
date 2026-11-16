#include <bits/stdc++.h>
using namespace std;
int a[100];

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (n!=0){{
        a[i]=n;
        cin >> n;
        i++;
    }}
    i-=1;
    while (i != 0){
        cout << a[i] << ' ';
        i--;
    }
}