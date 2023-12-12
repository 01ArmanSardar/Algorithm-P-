#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> grap[N];
vector<bool> visited(N, false);
vector<int> level(N, 0);
vector<int> parent(N, -1);
void bfs(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : grap[u])
        {
            if (visited[v] == true)
                continue;
            q.push(v);
            parent[v] = u;
            visited[v] = true;
            level[v] = level[u] + 1;
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
        grap[u].push_back(v);
        grap[v].push_back(u);
    }
    bfs(1);
    cout << level[n] << endl;
    int curnt = n;
    vector<int> path;
    while (curnt != -1)
    {
        path.push_back(curnt);
        curnt = parent[curnt];
    }
    reverse(path.begin(), path.end());
    for (auto p:path)
    {
        cout <<p<<" ";
    }

    return 0;
}