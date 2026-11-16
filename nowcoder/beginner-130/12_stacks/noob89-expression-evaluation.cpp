#include<bits/stdc++.h>

int getPriority(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*') return 2;
    return 0; // 其他（比如左括号）返回 0，优先级最低
}

void calc(stack<int>& num_st, stack<char>& op_st) {
    // 如果数字栈不够两个，或者符号栈为空，直接返回（防崩溃）
    if (num_st.size() < 2 || op_st.empty()) return;
    
    int b = num_st.top(); num_st.pop(); // 右操作数
    int a = num_st.top(); num_st.pop(); // 左操作数
    char op = op_st.top(); op_st.pop(); // 运算符
    
    int res = 0;
    if (op == '+') res = a + b;
    else if (op == '-') res = a - b;
    else if (op == '*') res = a * b;
    
    num_st.push(res); // 结果塞回去
}



class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 返回表达式的值
     * @param s string字符串 待计算的表达式
     * @return int整型
     */
    int solve(string s) {
        stack<int> num_st;
        stack<char> op_st;
        int num = 0;
        bool has_num = false; // 标记当前是否有正在拼的数字

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
        
            // 1. 如果是数字，就拼起来
            if (c >= '0' && c <= '9') {
                num = num * 10 + (c - '0');
                has_num = true;
            } 
        
            // 【注意】如果遇到符号了，且前面有拼好的数字，先把数字压栈！
            if (has_num && (c < '0' || c > '9')) {
                num_st.push(num);
                num = 0;
                has_num = false;
            }

            // 2. 遇到左括号，直接入符号栈
            if (c == '(') {
                op_st.push(c);
            } 
            // 3. 遇到右括号：疯狂算，直到遇到左括号
            else if (c == ')') {
                while (!op_st.empty() && op_st.top() != '(') {
                    calc(num_st, op_st); // 用你写的帮手去算
                }
                op_st.pop(); // 把 '(' 弹出来扔掉
            } 
            // 4. 遇到加减乘：先看优先级，压不住就先把前面的算了
            else if (c == '+' || c == '-' || c == '*') {
                // 【核心逻辑】如果栈顶优先级 >= 当前优先级，就清算
                while (!op_st.empty() && op_st.top() != '(' && getPriority(op_st.top()) >= getPriority(c)) {
                    calc(num_st, op_st);
                }
                op_st.push(c); // 算完或者压得住，当前符号入栈
            }
        }

        // 【关键修补】如果字符串以数字结尾，循环结束后还有数字没入栈
        if (has_num) {
            num_st.push(num);
        }
        
        // 5. 最后扫尾：把剩下没算的算完
        while (!op_st.empty()) {
            calc(num_st, op_st);
        }

        // 数字栈里唯一剩下的就是答案
        return num_st.top();
    }
};