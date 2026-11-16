#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cin >> s1 >> s2;

    if ((s1 == "elephant" && s2 == "tiger") || 
        (s1 == "tiger" && s2 == "cat") ||
        (s1 == "cat" && s2 == "mouse") ||
        (s1 == "mouse" && s2 == "elephant")) {
        cout << "win\n";
    }
    else if ((s2 == "elephant" && s1 == "tiger") || 
        (s2 == "tiger" && s1 == "cat") ||
        (s2 == "cat" && s1 == "mouse") ||
        (s2 == "mouse" && s1 == "elephant")) {
        cout << "lose\n";
    }
    else{
        cout << "tie" << '\n';
    }

    return 0;
}