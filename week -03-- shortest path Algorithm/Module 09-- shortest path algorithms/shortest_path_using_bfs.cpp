#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adjlst[N];
bool visited[N];
int level [N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        for (int v:adjlst[u])
        {
            if (visited[v]==true) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adjlst[u].push_back(v);
        adjlst[v].push_back(u);
    }
    int s,d;
    cin>>s>>d;
    bfs(s);
    cout <<level[d]<<endl;
    return 0;
}