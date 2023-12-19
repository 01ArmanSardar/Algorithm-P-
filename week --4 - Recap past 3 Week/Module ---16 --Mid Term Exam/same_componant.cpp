#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;
const int N = 1000;
bool vis[N][N];
int dis[N][N];
int n, m;
char ar[N][N];
vector<pii> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool is_valid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m && ar[ci][cj]=='.')
        return true;
    else
        return false;
}
void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    dis[si][sj] = 0;
    vis[si][sj] = true;
    while (!q.empty())
    {
        pii parent = q.front();
        int pi = parent.first;
        int pj = parent.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            pii p = path[i];
            int ci = pi + p.first;
            int cj = pj + p.second;
            if (is_valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
                dis[ci][cj] = dis[pi][pj] + 1;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
   /// char ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }
    int si, sj, di, dj;
    cin >> si >> sj ;
    cin>> di >> dj;
    bfs(si, sj);
    if (vis[di][dj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}