#include <bits/stdc++.h>
int get_id(char c){
    if(c == '(') return 1; // 左小括号映射为1
    if(c == '[') return 2; // 左中括号映射为2
    if(c == '{') return 3; // 左大括号映射为3
    if(c == '}') return 4; // 右大括号映射为4
    if(c == ']') return 5; // 右中括号映射为5
    if(c == ')') return 6; // 右大括号映射为6
    return 0; // 其他普通字符映射为0
}

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param s string字符串 
     * @return bool布尔型
     */
    bool isValid(string s) {
        stack<int> st; // 定义一个栈，存括号类型（数字）
        bool flag = true; // 标记配对是否正确

        // 遍历字符串
        for(int i = 0; i < s.size(); i++){
            int id = get_id(s[i]); // 将字符转成数字
            if(id > 3){
                // 当前字符是右括号
                if(st.empty() || st.top() + id != 7) {
                    // 栈空 或 无法配对，失败
                    flag = false;
                    break;
                }
                else{
                    // 成功配对，弹出栈顶
                    st.pop();
                }
            } 
            else if(id > 0) {
                // 当前字符是左括号
                st.push(id); // 压入栈中
            }
            // 其他普通字符直接跳过
        }

        // 最终判断：配对过程中无误，且栈空
        if(flag && st.empty()) {
            return true;
        }
        else {
            return false;   
        }
        }
};