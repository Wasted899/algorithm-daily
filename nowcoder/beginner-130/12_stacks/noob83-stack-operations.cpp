#include <bits/stdc++.h>
using namespace std;

// 具体解决每一组测试数据的函数
void solve() {
    int n;
    cin >> n;  // 读入本组操作次数
    stack<int> s;  // 定义一个存储无符号长整型数据的栈
    string op;  // 保存操作类型
    int x;  // 被操作的元素（仅在push操作时使用）

    // 循环执行n次操作
    while(n--) {
        cin >> op;  // 读入操作指令
        if(op == "push") {  
            // 如果是push操作，还需要读入一个元素x，并将其压入栈
            cin >> x;
            s.push(x);
        }
        else if(op == "pop") {
            // 如果是pop操作，首先判断栈是否为空
            if(!s.empty()) s.pop();  // 非空则弹出栈顶元素
            else cout << "Empty" << endl;  // 空栈时输出Empty
        }
        else if(op == "query") {
            // 如果是query操作，判断栈是否为空
            if(!s.empty()) cout << s.top() << endl;  // 非空则输出栈顶元素
            else cout << "Empty" << endl;  // 空栈时输出Empty
        }
        else {
            // 其他情况就是size操作，直接输出栈中元素个数
            cout << s.size() << endl;
        }
    }
}

int main() {
    // 快速输入输出设置，加速cin和cout
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 每组数据分别调用solve()函数进行处理
    solve();

    return 0;
}