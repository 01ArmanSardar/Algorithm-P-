#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
const int N = 1e5 + 5;
vector<pii> adjlst[N];
bool vis[N];
class edge
{
public:
    int a, b, w;
    edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
class cmp
{
public:
    bool operator()(edge a, edge b)
    {

        return a.w > b.w;
    }
};
void prims(int s, int n)
{
    priority_queue<edge, vector<edge>, cmp> pq;
    vector<edge> edglist;
    pq.push(edge(s, s, 0));
    int cnt = 0;
    while (!pq.empty())
    {
        edge parent = pq.top();
        pq.pop();
        int a = parent.a;
        int b = parent.b;
        int w = parent.w;
        if (vis[b])
            continue;
        vis[b] = true;
        cnt++;
        edglist.push_back(parent);
        for (int i = 0; i < adjlst[b].size(); i++)
        {
            pii child = adjlst[b][i];
            if (!vis[child.first])
            {
                pq.push(edge(b, child.first, child.second));
            }
        }
    }
    edglist.erase(edglist.begin());
    long long int sum = 0;
    for (edge val : edglist)
    {
        sum += (long long)(val.w);
    }
    if (cnt == n)
    {
        cout << sum << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adjlst[a].push_back({b, w});
        adjlst[b].push_back({a, w});
    }
    prims(1, n);

    return 0;
}