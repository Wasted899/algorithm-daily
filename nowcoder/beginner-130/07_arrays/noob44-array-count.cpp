#include <bits/stdc++.h>
using namespace std;
// 【步骤1：声明数组】
int a[100]; 

int main() {
    int T;
    cin >> T; // 读取测试组数
    
    while (T > 0) {
        int n, k;
        cin >> n >> k; 
        
        // 【步骤2：读入数据到数组】
        // 用 for 循环，把 n 个数挨个存进数组 a 里面
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        
        // 记得初始化你的“能量池”和“得分”
        int S = 0;
        int cnt = 0;
        
        // 【步骤3：遍历数组，执行规则】
        // 数据都存好了，现在从头到尾挨个看一遍
        for (int i = 0; i < n; i++) {
            // 此时 a[i] 就是当前正在看的数字
            if (a[i] >= k) {
                S = S + a[i]; // 充能
            } 
            else if (a[i] == 0 && S >= 1) {
                S = S - 1;    // 消耗能量
                cnt = cnt + 1; // 得分加一
            }
        }
        
        // 遍历完这个数组，输出结果并换行
        cout << cnt << endl;
        
        T = T - 1; // 准备处理下一组数据
    }
    
    return 0;
}