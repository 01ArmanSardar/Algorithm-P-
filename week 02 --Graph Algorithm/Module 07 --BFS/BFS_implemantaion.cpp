#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
bool visited[N];
int level[N];
vector<int> adjlst[N];
void dfs(int s)
{
    queue<int> q;
    q.push(s);
    
    visited[s] = true;
    level[s]=0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout <<"visiting node "<< u <<endl;
        for (int v : adjlst[u])
        {
            if (visited[v] == true)
                continue;
            q.push(v);
            visited[v]=true ;
            level[v]=level[u]+1;

        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjlst[u].push_back(v);
        adjlst[v].push_back(u);
        
    }
    dfs(1);
    for (int i=1;i<=n;i++)
    {
        cout <<"level of "<<i<<": "<<level[i]<<endl;
    }

    return 0;
}