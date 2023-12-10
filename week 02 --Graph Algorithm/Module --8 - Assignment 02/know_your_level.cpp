#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adjlst[N];
bool visited[N];
int level[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    level[s] = 0;
    visited[s] = true;
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
        }
    }
}
int main()
{
    int n, e,l;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adjlst[u].push_back(v);
        adjlst[v].push_back(u);
    } 
    
cin>>l;
    bfs(0);
   

    vector<int> findpizzalvl;
    for (int i = 0; i < n; i++)
    {
        if (level[i] == l)
        {
            findpizzalvl.push_back(i);
        }
    }
  
  if (level[i]==0)
  cout<<0;
    if (findpizzalvl.empty())
    {
        cout << -1<< endl;
    }
    else
    {
        for (int shop : findpizzalvl)
        {
            cout <<shop<<" ";
        }
    }
    cout <<endl;
    return 0;
}