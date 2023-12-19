#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
bool vist[N];
vector<int> adjlst[N];
void dfs(int s)
{
    vist[s] = true;
    for (int child : adjlst[s])
    {
        if (!vist[child])
            dfs(child);
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adjlst[u].push_back(v);
        adjlst[v].push_back(u);
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (!vist[i])
        {
            ans.push_back(i);
            dfs(i);
        }
    }
    for (int i=0;i<ans.size();i++)
    {
        cout << ans[i]<<endl;
    }

    return 0;
}