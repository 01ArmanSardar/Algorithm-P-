/*#include <bits/stdc++.h>
using namespace std;
const int N =1e5+5;
vector <int > adj[N];
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i=0;i<m;i++)
    {
        int u,v;
        cin >>u>>v;
        adj[u].push_back(v);//this singel line for directed graph
        adj[v].push_back(u);//when previous line and this line is write for undirected graph,And their two line is unweihted edge.
    }
    for (int i=1;i<=n;i++)
    {
        cout <<"List "<<i<<": ";
        for (int j:adj[i])
        {
            cout << j<<" ";
        }
        cout <<endl;
    }
    
    return 0;
}*/


#include <bits/stdc++.h>
using namespace std;
const int N =1e5+5;
vector <pair<int, int> > adj[N];
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i=0;i<m;i++)
    {
        int u,v,w;
        cin >>u>>v>>w;
        adj[u].push_back({v,w});//this singel line for directed graph
       // adj[v].push_back({u,w});//when previous line and this line is write for undirected graph,And their two line is unweihted edge.
    }
    for (int i=1;i<=n;i++)
    {
        cout <<"List "<<i<<": ";
        for (auto j:adj[i])
        {
            cout <<"("<< j.first<<" ," <<j.second<<")";
        }
        cout <<endl;
    }
    
    return 0;
}