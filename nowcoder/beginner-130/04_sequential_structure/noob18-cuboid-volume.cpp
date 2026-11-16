#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int S = 2 * (a*b + b*c + c*a),V = a*b*c;
    cout << S << endl << V << endl;
    return 0;
}