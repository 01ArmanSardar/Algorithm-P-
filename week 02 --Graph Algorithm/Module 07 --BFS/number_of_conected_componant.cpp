#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
bool visited[N];
vector<int> adjlst[N];
void dfs(int u)
{
    visited[u] = true;
    for (int v : adjlst[u])
    {
        if (visited[v] == true)
            continue;

        dfs(v);
    }
}
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        // this group description is : pop a node from the queue and insert unvisited neighbors of that node
        int u = q.front();
        q.pop();
        for (int v : adjlst[u])
        {
            if (visited[v] == true)
                continue;
            q.push(v);
            visited[v] = true;
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
    int cc=0;
    for (int i=1;i<=n;i++)
    {
        if (visited[i]==true) continue;
        dfs(i);
        cc++;
    }
    cout <<"number of conected componant : "<<cc<<endl;
    return 0;
}