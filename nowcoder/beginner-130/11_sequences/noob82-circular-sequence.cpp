#include<bits/stdc++.h>
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算出旺仔哥哥最后会站在哪位小朋友旁边
     * @param a int整型vector 第 i 个小朋友的数字是 a_i
     * @param m int整型 表示旺仔哥哥的移动次数
     * @return int整型
     */
    int stopAtWho(vector<int>& a, int m) {
        int n = a.size(); // 总人数
        int curr = 0;     // 当前所在的下标（0代表1号小朋友）
        
        // 模拟移动 m 次
        for (int i = 0; i < m; i++) {
            // 当前小朋友衣服上的数字，就是要走的步数
            int steps = a[curr]; 
            
            // 一步一步逆时针走
            for (int j = 0; j < steps; j++) {
                curr--; // 逆时针，下标减1
                if (curr < 0) {
                    curr = n - 1; // 如果小于0了，说明绕到了队尾（最后一个小朋友）
                }
            }
        }

        /*for (int i = 0; i < m; i++) {
            int steps = a[curr]; // 当前要走的步数
            
            // 【核心公式】：用取模一步到位实现绕圈
            // 注意：必须要先算 steps % n，再算 curr - (...)
            curr = (curr - steps % n + n) % n;
        }
        
        // 题目返回的是小朋友的编号（1 到 n），所以下标要加 1
        return curr + 1; 
        return x;*/
        return curr + 1;
    }
};