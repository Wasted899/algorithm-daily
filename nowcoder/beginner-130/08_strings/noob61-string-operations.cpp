#include <iostream>

using namespace std;

int main (){
    int n,m;
    scanf("%d%d",&n,&m);
    char a[n];
    for(int i = 0; i < n; i++){
        scanf(" %c",&a[i]);
    }
    for(int j = 0;j < m; j++){
        char c1,c2;
        int l,r;
        scanf("%d%d %c %c",&l,&r,&c1,&c2);
        for(int i = l-1; i <= r-1; i++){
            if(a[i]==c1) a[i]=c2;
        }
    }
    for(int i = 0; i < n; i++){
       cout << a[i];
    }
    return 0;
}
//wwwwwwwwwwwwwwwwwwwwwwwwww