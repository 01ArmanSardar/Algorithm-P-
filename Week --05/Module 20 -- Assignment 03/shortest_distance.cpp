#include <bits/stdc++.h>
using namespace std;
const int N = 105;
const int INF = 1e9 + 5;
int d[N][N];
int n, e;
void print_matrix()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (d[i][j] == INF)
                cout << "X ";
            else
                cout << d[i][j] << " ";
        }
        cout << endl;
    }
}
void dist_initalize()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j)
                d[i][j] = INF;
        }
    }
}
int main()
{
    cin >> n >> e;
    dist_initalize();
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        d[u][v] =min(d[u][v], w);
    }
    
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int sr, ds;
        cin >> sr >> ds;
        if (d[sr][ds] == INF)
        {
            cout << -1 << endl;
        }
        else
            cout << d[sr][ds] << endl;
    }
    
    return 0;
}