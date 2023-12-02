#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int depth [N];
int height[N];
void dfs(int u)
{
    //Section 01 : action just after entering node u
    visited[u]=true;
    //cout <<"Visiting Node "<<u<<endl;
    for (int v : adj[u])
    {
        //Section 2 : actions before entering a new neighbor/child
        if (visited[v] == true)
            continue;
            depth[v]=depth[u]+1;
        dfs(v);
        height[u]=max(height[u],height[v]+1);

        //Section 3 : action after exiting a neighbour 
    }
    //Section 4 : action before exiting node u
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    dfs(1);
    for (int i=1;i<=n;i++)
    {
        cout <<"Depth of Node "<<i<<" : "<<depth[i]<<endl;

    }
    cout <<"*************"<<endl;
    for (int i=1;i<=n;i++)
    {
        cout <<"height of Node "<<i<<" : "<<height[i]<<endl;

    }
    
    return 0;
}