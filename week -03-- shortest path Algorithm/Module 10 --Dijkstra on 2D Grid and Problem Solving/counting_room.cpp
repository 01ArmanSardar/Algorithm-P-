#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<string> gr;
bool visited[N][N];
int n, m;
bool isValid(int i, int j)
{
    return (i >= 0 && i <= n && j >= 0 && j <= m);
}
void dfs(int i, int j)
{
    if (visited[i][j])
        return;
    if (!isValid(i, j))
        return;
    if (gr[i][j] == '#')
        return;
    visited[i][j] = true;
    dfs(i, j - 1);
    dfs(i, j + 1);
    dfs(i - 1, j);
    dfs(i + 1, j);
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        gr.push_back(x);
    }
    int room = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (gr[i][j] == '#')
                continue;
            if (visited[i][j] == true)
                continue;
            dfs(i, j);
            room++;
        }
    }
    cout <<room<<endl;
    return 0;
}