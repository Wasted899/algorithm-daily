#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    stack<char> st; // 搞一个字符栈
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            st.push('a'); // 遇到 a，扔进栈里
        } 
        else if (s[i] == 'b') {
            // 遇到 b，看看栈里有没有 a 可以配对
            if (st.empty()) {
                // 栈空了，说明前面没有 a，这是非法的 b（比如 ba）
                cout << "Bad" << endl;
                return 0; // 直接结束
            } else {
                // 栈不空，说明有 a，把它弹出来配对
                st.pop(); 
            }
        }
    }
    
    // 循环结束，如果栈空了，说明完美配对
    if (st.empty()) {
        cout << "Good" << endl;
    } else {
        cout << "Bad" << endl;
    }
    
    return 0;
}