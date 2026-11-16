#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    //法1
    /*
    for (int i = 0; i < s.size() - 2; i ++) {
        if ((s[i] == 'B' || s[i] == 'b') && (s[i + 1] == 'O' || s[i + 1] == 'o') && (s[i + 2] == 'B' || s[i + 2] == 'b')) {
            cout << i << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    */
    //法2
    for (int i = 0; i < s.size(); i ++) {
        if (s[i] < 92) s[i] += 32;
    }
    auto pos = s.find("bob");
    if (pos == string::npos) {
        cout << -1 << '\n';
    } else {
        cout << pos << '\n';
    }
    
    return 0;
}
//wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww