#include <iostream>
using namespace std;

int main() {
    long long n,res=0,s=0;
    cin >> n;
    n=abs(n);
    while(n>0){
        res += n%10;
        n/=10;
    }
    cout << res << '\n';
    return 0;
}