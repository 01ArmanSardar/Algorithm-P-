#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int adjmt[n ][n ];
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            adjmt[i][j] = 0;
        }
    }
   /*  for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
           cout << adjmt[i][j]<<" ";
        }
        cout <<endl;
    } */

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adjmt[a][b] = 1;
       adjmt[b][a] = 1;
    }

     for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
           cout << adjmt[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;
}