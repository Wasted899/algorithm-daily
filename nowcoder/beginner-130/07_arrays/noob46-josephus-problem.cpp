#include<bits/stdc++.h>
using namespace std;

// 数组开在全局，默认全是 false (没出局)
bool out[105] = {false}; 

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    
    int left = n;     // 场上还剩 left 个人
    int curr = k;     // 从 k 号开始报数
    int cnt = 0;      // 报数器
    
    // 只要剩下超过1个人，就一直转圈
    while (left > 1) {
        
        // 如果当前这个人还没出局
        if (out[curr] == false) {
            cnt++; // 他报数了
            
            // 如果他刚好报到 m
            if (cnt == m) {
                out[curr] = true; // 标记出局
                left--;           // 总人数减一
                cnt = 0;          // 报数器清零，下一个人从 1 开始报
            }
        }
        
        // 无论他有没有出局，都要看下一个人
        curr++; 
        
        // 【关键核心】：如果走到最后了，绕回到 0 号位置
        if (curr == n) {
            curr = 0;
        }
    }
    
    // 最后找找谁没出局，打印出来
    for (int i = 0; i < n; i++) {
        if (out[i] == false) {
            cout << i << endl;
            break; // 找到就退出
        }
    }
    
    return 0;
}