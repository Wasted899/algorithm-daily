#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n ;
    int ge,shi,bai,qian;
    ge = n % 10;
    n/=10;
    shi = n % 10;
    n/=10;
    bai = n % 10;
    n/=10;
    qian = n % 10;
    int sum = ge + shi + bai + qian;
    cout << sum << endl;
    return 0;
}