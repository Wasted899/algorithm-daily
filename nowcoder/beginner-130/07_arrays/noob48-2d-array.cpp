#include <iostream>
using namespace std;
//WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
// 【绝招】把大数组定义在 main 函数外面。
// 1. 防止栈溢出崩溃。
// 2. 全局数组默认会自动初始化为 0，省去手动清空的麻烦。
// 稍微开大一点 (1005)，防止题目卡边界 (1000)。
int grid[1005][1005]; 

int main() {
    // 1. 读入行列数
    int n, m;
    cin >> n >> m;
    
    // 2. 【核心防坑】求和变量必须用 long long
    // 因为 10^6 个 10^9 相加，远超 int 的极限。
    // 初始化为 0，准备开始累加。
    long long total_sum = 0; 
    
    // 3. 双重 for 循环遍历二维数组
    // 外层循环控制行 (i 从 0 到 n-1)
    for (int i = 0; i < n; i++) {
        // 内层循环控制列 (j 从 0 到 m-1)
        for (int j = 0; j < m; j++) {
            // 读入当前位置的元素
            cin >> grid[i][j];
            
            // 直接把读入的数累加到总和里
            // (其实这题都不需要把整个数组存下来，边读边加最省内存)
            total_sum += grid[i][j]; 
        }
    }
    
    // 4. 输出最终结果
    cout << total_sum << endl;
    
    return 0;
}