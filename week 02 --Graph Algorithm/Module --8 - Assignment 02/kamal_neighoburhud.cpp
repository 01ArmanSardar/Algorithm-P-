#include <bits/stdc++.h>
using namespace std;
const int N = 20;
vector<int> adjlst[N];
bool visited[N];
int countk=0;
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
   for (int j:adjlst[k])
   {
    countk++;
   }
   cout <<countk;
   
    return 0;
}