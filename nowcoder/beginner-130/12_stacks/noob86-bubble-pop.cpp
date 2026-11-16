#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        
        stack<char> st; // 搞一个正规的字符栈
        
        for (char c : s) { 
            // c 就是“手里的元素”，我们要把它安排明白
            while (true) {
                if (st.empty()) {
                    st.push(c); // 栈空，直接入栈
                    break; 
                }
                
                // 1. 都是小 o：合并
                if (c == 'o' && st.top() == 'o') {
                    st.pop(); // 栈顶的小 o 被消耗了
                    c = 'O';  // 手里的小 o 变成大 O
                    // 注意：千万别直接入栈！继续循环，因为手里的大 O 可能还会和新的栈顶爆炸
                }
                // 2. 都是大 O：爆炸
                else if (c == 'O' && st.top() == 'O') {
                    st.pop(); // 栈顶的大 O 炸了
                    // 手里的大 O 也炸了，直接 break，啥也不留
                    break; 
                }
                // 3. 没法反应：入栈
                else {
                    st.push(c); // 把手里的 c 放进栈里
                    break;
                }
            }
        }
        
        // 把栈里的结果倒出来，因为栈是后进先出，直接输出会反掉
        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans; // 每次把栈顶元素拼在答案的最前面
            st.pop();
        }
        cout << ans << endl;
    }
    return 0;
}