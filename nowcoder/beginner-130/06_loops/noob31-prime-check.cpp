#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T ;
    for (int i = 0 ; i < T ; i++){
        int n;
        cin >> n;
        if (n == 1){
            cout << "No" << endl;
            continue;
        }
        int is_Prime = 1;
        for (int j = 2; j < n ; j++){
            if (n % j == 0){
                is_Prime=0;
                break;
            }
        }
        if (is_Prime == 1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}