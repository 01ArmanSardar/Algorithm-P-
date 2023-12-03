#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adjlist[N];
bool visited[N];
void dfs(int u)
{
    visited[u] = true; // prothomei jeh node tah asbhe tah k true kore dibho karon jathe next seh node tah teh nah dukte pareh ,karon akoi node a varvar dukle setah infinity loop a chole jabhe ,tai akbr je node tah asche setah teh jeno abr nah jaioa jai tai seh node tah true kore dichi.
    cout << "Visiting Node " << u << endl;
    for (int v : adjlist[u])
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
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
   
    dfs(1);
    /*  for (int i=0;i<n;i++)
    {
        for (int val:adjlist[i])
        {
            cout << val;
        }
    }  */

    return 0;
}
