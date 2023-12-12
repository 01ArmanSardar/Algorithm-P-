#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> adjlst[N];
vector<bool> visited(N);
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
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adjlst[u].push_back(v);
        adjlst[v].push_back(u);
    }
    vector<int> leaders;
    for (int i = 1; i <=n; i++)
    {
        if (visited[i] == true)
            continue;
        leaders.push_back(i);
        dfs(i);
    }
    cout <<leaders.size()-1<<endl;
    for (int i=1;i<leaders.size();i++)
    {
        cout<<leaders[i-1]<<" "<<leaders[i]<<endl;
    }
    return 0;
}
