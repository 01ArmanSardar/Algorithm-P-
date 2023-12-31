#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adjlst[N];
bool visited[N];
bool dfs(int u,int p=-1)
{
    bool cycleExits =false;

    visited[u] = true;
    for (int v : adjlst[u])
    {
        if (v==p) continue;
        if (visited[v] == true) return true;
            
     cycleExits =cycleExits | dfs(v,u);
     return cycleExits;
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
    bool isCycle =false;
    for (int i=1;i<=n;i++)
    {
        if (visited[i]) continue;
        isCycle |= dfs(i);
    }
    if (isCycle)
    cout <<"Cycle Detected \n";
    else cout <<"NO cyclde detected \n";
  /* ai part tah holo sudhu aktah componant er jonno
  if ( dfs(1))
{
    cout << "cycle detected\n";
}
else cout <<"no cycle detected\n";*/
    return 0;
}