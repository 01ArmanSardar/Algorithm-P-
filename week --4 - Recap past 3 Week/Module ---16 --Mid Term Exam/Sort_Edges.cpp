#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
int main()
{
    int t;
    cin >> t;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        pq.push({A, B});
    }
    while (!pq.empty())
    {
        cout << pq.top().first<<" "<<pq.top().second << endl;
        pq.pop();
    }

    return 0;
}