#include <bits/stdc++.h>
using namespace std;
int arr[100000];

int main() {
    int T,n,x;
    cin >> T;

    int max,min;

    int sum=0;

    double m;

    for (int i = 0 ; i < T ; i++){
        cin >> n;
        sum  = 0;
        m = 0;
        for (int j = 0 ; j < n ; j++){
        cin >> x;
        arr[j] = x;
        sum += arr[j];
        if (j == 0){
            max = arr[j];
            min = arr[j];
        }else{
            if (arr[j] > max) max = arr[j];
            if (arr[j] < min) min = arr[j];
        }
    }
        double ave = (double)sum / n;
        for (int k = 0 ; k < n ; k++){
            double t = arr[k] - ave;
            m += t*t;
        }
        double s =  (double)m / n;
        cout << max-min << ' ' << fixed << setprecision(3) << s << '\n' ;
    }
    return 0;
}