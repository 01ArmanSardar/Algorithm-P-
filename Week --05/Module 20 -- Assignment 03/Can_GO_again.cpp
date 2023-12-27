#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }
    int s, t;
    cin >> s>> t;
    vector<int > dis(n+1,INT_MAX);
    dis[s]=0;
    /*for (int i = 1; i <= n-1; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[1] = 0;*/
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed:v)
        {
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;
            if ( dis[a] != INT_MAX && dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }
    
    bool cycle = false;
    for (int i = 0; i < v.size(); i++)
    {
       for (Edge ed :v)
       { 
        int a = ed.u;
        int b = ed.v;
        int w = ed.w;
        if (dis [a] !=INT_MAX && dis[a] + w < dis[b])
         {
            cycle = true;
            break;
            //dis[b] = dis[a] + w;
         }
       }
    }
    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        while (t--)
        {
            int dst;
            cin >> dst;
            if (dis[dst] == INT_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[dst] << endl;
            }
        }

        return 0;
    }
}