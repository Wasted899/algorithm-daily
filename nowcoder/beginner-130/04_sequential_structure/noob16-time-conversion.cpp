#include <iostream>
using namespace std;

int main() {
    int seconds;
    cin >> seconds;
    int h,m,s;
    h = seconds/3600;
    seconds%=3600;
    m = seconds/60;
    seconds%=60;
    s = seconds%60;
    cout << h << " " << m << " " << s << endl;
    return 0;
}