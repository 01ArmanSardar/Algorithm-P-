#include <bits/stdc++.h>
using namespace std;
const int N = 20;
vector<int> adjlst[N];
bool visited[N];
 int countk=0;
int bfs(int k)
{
    
    queue<int> q;
    q.push(k);
    visited[k] = true;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
       //countk++;
        for (int v:adjlst[u])
        { 
           // countk++;
            if (visited[v]==true) continue;
            q.push(v);
            countk++;
            visited[v]=true;
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
   int k;
   cin>>k;
   bfs(k);


        return 0;
}