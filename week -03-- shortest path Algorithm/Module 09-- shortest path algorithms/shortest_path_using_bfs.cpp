#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adjlst[N];
bool visited[N];
int level[N];
int parent[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    parent[s] = -1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adjlst[u])
        {
            if (visited[v] == true)
                continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
            parent[v] = u;
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
    int s, d;
    cin >> s >> d;
    bfs(s);
   cout << "distance : " << level[d] << endl;
    /*for (int i = 1; i <= n; i++)
    {
        cout << "parent of : " << i << " :" << parent[i] << endl;
    } */
    vector<int> path;
    int current = d;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(), path.end());
    cout << "path : ";
    for (int node : path)
    {
        cout << node << " ";
    }
    return 0;
}