#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    string s = to_string(N);
    int n = s.size();
    for (int i = n-3; i > 0; i=i-3) {
        s.insert(i, 1, ',');
    }
    cout << s;
}