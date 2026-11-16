#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a>=b && a>=c) cout << "The maximum number is :" << " " <<a << endl;
    else if (b>=a && b>=c) cout << "The maximum number is :" << " " << b << endl;
    else if (c>=b && c>=a) cout << "The maximum number is :" << " " << c << endl;
    if (a<=b && a<=c) cout << "The minimum number is :" << " " << a << endl;
    else if (b<=a && b<=c) cout << "The minimum number is :" << " " << b << endl;
    else if (c<=a && c<=b) cout << "The minimum number is :" << " " << c << endl;
    return 0;
}