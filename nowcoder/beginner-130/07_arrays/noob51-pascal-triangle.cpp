#include<bits/stdc++.h>
//wwwwwwwwwwwwwwwwwww
using namespace std;
int main()
{
    long long n[40][40],y;
    cin>>y;
    for(int i=1;i<=y;i++)
        for(int j=1;j<=i;j++)
            if(j==1)
                n[i][j]=1;
            else if(i==j)
                n[i][j]=1;
            else
                n[i][j]=n[i-1][j]+n[i-1][j-1];
    for(int i=1;i<=y;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<n[i][j];
            if(j!=i)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}