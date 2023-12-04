#include <bits/stdc++.h>
using namespace std;
const int N =1e3+5;
int adjmt[N][N];
int main()
{
    int n;
    int m;
    cin>>n>>m;
    for (int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;//jodhi weighted graph krte chai tahole aktah W value input nibho
        adjmt[u][v]=1;//for directed graph,  weighted graph er jonno 1 er jaigai W er value tah takbhe 
        adjmt[v][u]=1;//and both of input for undirected graph
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cout <<adjmt[i][j]<<" ";
        }
        cout <<endl;
    }
    
    return 0;
}