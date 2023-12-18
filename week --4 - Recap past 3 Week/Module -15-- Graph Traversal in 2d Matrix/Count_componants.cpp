#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adjlst[N];
vector <int> componat_list;
bool vis[N];
void dfs(int s)
{
    vis[s]=true;
    componat_list.push_back(s);
    for (int child:adjlst[s])
    {
        
        if (!vis[child])
        dfs(child);
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adjlst[a].push_back(b);
        adjlst[b].push_back(a);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            count++;
            dfs(i);
            for (int val:componat_list)
            {
                cout <<val<<" ";
            }
            cout <<endl;
            componat_list.clear();
        }
    }
    cout <<count;
    return 0;
}