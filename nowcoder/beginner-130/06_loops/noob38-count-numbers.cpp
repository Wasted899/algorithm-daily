#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        int a = 0;
        if(i%4 != 0)//判断输入的数据中是否是4或4的倍数
        {
            int c = i;
            while(c)
            {
                if(c%10 == 4)//依次判断该数的每一位的数据是否是4或者4的倍数
                {
                    a = 1;
                }
                c = c/10;
            }
            if(a == 0)
                cout << i << endl;
        }

    }
    return 0;
    
}