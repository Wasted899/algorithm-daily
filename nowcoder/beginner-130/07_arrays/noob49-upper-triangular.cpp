#include <iostream>
using namespace std;
//wwwwwwwwwwwwwwwwwwwwwwwwww
// 【防坑绝招】把稍微大一点的二维数组写在 main 函数外面，防止栈溢出
int a[15][15]; 

int main() {
    int n;
    cin >> n; // 读入方阵的阶数
    
    // 1. 老老实实把整个矩阵读进来
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    // 2. 准备一个布尔变量做标记，默认它是上三角矩阵
    bool is_upper = true; 
    
    // 3. 开始检查主对角线以下的区域
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // 【核心逻辑】如果当前位置在“主对角线以下”（行大于列）
            if (i > j) {
                // 并且这个数字不是 0
                if (a[i][j] != 0) {
                    is_upper = false; // 完了，它不是上三角矩阵了
                    break;            // 提前结束内层循环，不用看了
                }
            }
        }
        // 如果内层已经发现违规了，外层也赶紧结束，没必要看了
        if (is_upper == false) {
            break;
        }
    }
    
    // 4. 根据标记输出结果
    if (is_upper == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}