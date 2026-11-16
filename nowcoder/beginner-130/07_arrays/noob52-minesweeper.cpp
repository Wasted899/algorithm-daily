#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
char mp[1020][1020];
int ans[1020][1020]; // 用于记录答案
int dx[8] = {-1,-1,-1,0,0,1,1,1}; // 周围8格x轴位移
int dy[8] = {-1,0,1,-1,1,-1,0,1}; // 周围8格y轴位移
void find(int x,int y){
    if(mp[x][y] == '*'){
        for(int i = 0;i < 8;i++) ans[x + dx[i]][y + dy[i]]++; // 雷周围8个方向内的格子的答案+1
    }
}
signed main(){
    cin >> n >> m;
    for(int i = 1;i <= n;i++) for(int j = 1;j <= m;j++) {
        cin >> mp[i][j];
        find(i,j);
    }
    for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            if(mp[i][j] == '*') cout << '*'; // 原来有雷的输出'*'
            else cout << ans[i][j]; // 原来没有雷的输出答案
        }
        cout << endl;
    }
    return 0;
}
//wwwwwwwwwwwwwwwwwww