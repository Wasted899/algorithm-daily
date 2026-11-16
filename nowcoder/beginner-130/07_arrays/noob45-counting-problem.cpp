#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , x ;
    cin >> n >> x;
    int cnt = 0; // 计数器，算总数

    // 第一步：遍历 1 到 n
    for (int i = 1; i <= n; i++) {
        int temp = i; // 弄个副本，别把外层的 i 弄坏了

        // 第二步：拆分 temp 的每一位
        while (temp > 0) {
            int digit = temp % 10; // 拿出个位
            if (digit == x) {      // 比较
                cnt++;
            }
            temp = temp / 10;// 把个位砍掉
        }
    }

    cout << cnt << '\n' ;
    // 最后输出 cnt
}