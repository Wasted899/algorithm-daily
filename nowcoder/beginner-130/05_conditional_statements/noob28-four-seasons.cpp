#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = n%100;
    if (m == 12 || m == 1 || m == 2) cout << "winter" << endl; 
    else if (m == 3 || m == 4 || m == 5) cout << "spring" << endl; 
    else if (m == 6 || m == 7 || m == 8) cout << "summer" << endl; 
    else if (m == 9 || m == 10 || m == 11) cout << "autumn" << endl;
    return 0; 
}