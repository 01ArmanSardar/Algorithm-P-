#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;
int n, m;
const int N = 1e3 + 5;
bool vist[N][N];
char ar[N][N];
vector<pii> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool is_valid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m && ar[ci][cj]=='.')
        return true;
    else
        return false;
}
void dfs(int si, int sj)
{
    vist[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        pii p = path[i];
        int ci = si + p.first;
        int cj = sj + p.second;
        if (is_valid (ci,cj)&& !vist[ci][cj])
        {
         dfs (ci,cj) ; 
        }
    }
}
int main()
{
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }
    int cnt =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vist[i][j] && ar[i][j]=='.')
            {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout <<cnt<<endl;
    return 0;
}