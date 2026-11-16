#include <bits/stdc++.h>
using namespace std;

// 题目说 L <= 10000，我们稍微开大一点，防止越界
bool tree[10005]; 

int main() {
    int L, M;
    cin >> L >> M; // L是马路长度，M是施工区域数量
    
    // 1. 种树：0 到 L 每个位置都有树
    for (int i = 0; i <= L; i++) {
        tree[i] = true; // true 代表树还在
    }
    
    // 2. 拔树：处理 M 个施工区域
    for (int i = 0; i < M; i++) {
        int l, r;
        cin >> l >> r; // 读入当前施工区域的起点和终点
        
        // 把 l 到 r 范围内的树全部拔掉（标记为 false）
        for (int j = l; j <= r; j++) {
            tree[j] = false; 
        }
    }
    
    // 3. 统计：数一数还剩多少棵树
    int cnt = 0; // 计数器
    for (int i = 0; i <= L; i++) {
        if (tree[i] == true) {
            cnt = cnt + 1; 
        }
    }
    
    cout << cnt << endl;
    return 0;
}