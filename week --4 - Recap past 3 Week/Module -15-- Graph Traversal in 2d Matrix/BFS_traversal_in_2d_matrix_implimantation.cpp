#include <bits/stdc++.h>
using namespace std;
int n, m;
int main()
{

    cin >> n >> m;
    char ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; i++)
        {
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; i++)
        {
            cout << ar[i][j];
        }
        cout <<endl;
    }

    return 0;
}