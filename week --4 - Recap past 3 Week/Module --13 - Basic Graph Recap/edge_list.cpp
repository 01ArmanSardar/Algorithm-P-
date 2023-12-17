#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> edglst;
int main()
{
    int n, e;
    cin >> n >> e;
while(e--)
    {
        int a, b;
        cin >> a >> b;
        edglst.push_back({a,b});
    }
    for (int i=0;i<edglst.size();i++)
    {
        cout <<edglst[i].first <<" "<<edglst[i].second<<endl;
    }

    return 0;
}