#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N = 1e5 + 5;
const int INF = 1e9 + 5;
vector<pii> grap[N];
int d[N];
int n, m;
void bellman_ford(int s)
{
    for (int i = 1; i <= n; i++)
        d[i] = INF;
    d[s] = 0;

    for (int i = 1; i < n; i++)
    {
        for (int u = 1; u <= n; u++)
        {
            for (pii vpair : grap[u])
            {
                int v = vpair.first;
                int w = vpair.second;
                if (d[u] != INF && d[v] > d[u] + w)
                {
                    d[v] = d[u] + w;
                }
            }
        }
    }
}
int main()
{

    cin >> n >> m;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        grap[u].push_back({v, w});
        bellman_ford(1);
        for (int i = 1; i <= n; i++)
        {
            cout << "distance of " << i << " :" << d[i] << endl;
        }
    }

    return 0;
}