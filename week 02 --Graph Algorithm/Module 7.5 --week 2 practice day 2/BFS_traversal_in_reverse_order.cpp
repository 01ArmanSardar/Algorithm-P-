#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adjlst[N];
bool visited[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
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
             cout <<"visiting node "<< v <<endl;
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
    bfs(1);
    return 0;
}
