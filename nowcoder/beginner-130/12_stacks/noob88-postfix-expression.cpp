#include<bits/stdc++.h>
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 给定一个后缀表达式，返回它的结果
     * @param str string字符串 
     * @return long长整型
     */
    long legalExp(string str) {
    
        // 必须用 long long，不然会数据溢出
        stack<long> st; 
        long num = 0; // 用来拼凑多位数
    
        for (int i = 0; i < str.length(); i++) {
            char c = str[i];
        
            if (c >= '0' && c <= '9') {
                // 1. 是数字，拼起来
                num = num * 10 + (c - '0');
            } 
            else if (c == '#') {
                // 2. 遇到结束符，把拼好的数字入栈
                st.push(num);
                num = 0; // 清零，为下一个数字做准备
            } 
            else {
                // 3. 遇到运算符，弹两个数，算完入栈
                long b = st.top(); st.pop(); // 先弹出来的是右边的数
                long a = st.top(); st.pop(); // 后弹出来的是左边的数
            
                long res = 0;
                if (c == '+') res = a + b;
                else if (c == '-') res = a - b;
                else if (c == '*') res = a * b;
            
                st.push(res); // 结果重新入栈
            }
        }
    
        // 最后栈里只剩一个数，就是最终结果
        long x = st.top();
        return x;
    }
};