#include <iostream>
//wwwwwwwwwwwwwwwwwwww
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m; //n行m列
    int arr1[10][10] = { {0} };
    int arr2[10][10] = { {0} };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr2[i][j] = arr1[j][i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}