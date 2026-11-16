#include <bits/stdc++.h>
using namespace std;

// 辅助函数：将括号字符转换为数字编码，方便后续比较
int get_id(char c){
    if(c == '(') return 1; // 左小括号映射为1
    if(c == '[') return 2; // 左中括号映射为2
    if(c == ']') return 3; // 右中括号映射为3
    if(c == ')') return 4; // 右小括号映射为4
    return 0; // 其他普通字符映射为0
}

int main(){
    string str;
    cin >> str; // 读入整个字符串
    stack<int> s; // 定义一个栈，存括号类型（数字）
    bool flag = true; // 标记配对是否正确

    // 遍历字符串
    for(int i = 0; i < str.size(); i++){
        int id = get_id(str[i]); // 将字符转成数字
        if(id > 2){
            // 当前字符是右括号
            if(s.empty() || s.top() + id != 5) {
                // 栈空 或 无法配对，失败
                flag = false;
                break;
            }
            else {
                // 成功配对，弹出栈顶
                s.pop();
            }
        } 
        else if(id > 0) {
            // 当前字符是左括号
            s.push(id); // 压入栈中
        }
        // 其他普通字符直接跳过
    }

    // 最终判断：配对过程中无误，且栈空
    if(flag && s.empty()) cout << "true";
    else cout << "false";

    return 0;
}