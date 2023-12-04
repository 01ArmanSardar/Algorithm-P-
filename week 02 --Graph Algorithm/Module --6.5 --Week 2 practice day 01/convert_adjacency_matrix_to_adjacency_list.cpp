#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int adjmt[N][N];
vector<int> adjlist[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adjmt[i][j];
            if (adjmt[i][j] != 0)
                adjlist[i].push_back(j);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << ": ";
         for (int j:adjlist[i])
        {
            cout << j<<" ";
        }
        cout << endl;
    }

    return 0;
}