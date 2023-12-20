#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N = 105;

bool visited[N][N];
int level[N][N];

int n, m;
vector<pii> direc = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}}; // that,s mean{i,j-1}  {i,j+1}  {i-1,j}  {i+1,j} akhne techniue tah hocce i=0 and j=0 ,i bah j ak ghor pichone geleh -1 ar samne gele +1
bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}
void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pii upair = q.front();
        int i = upair.first;
        int j = upair.second;
        q.pop();
        for (auto d : direc)
        {
            int ni = i + d.first;
            int nj = j + d.second;
            if (isValid(ni, nj) && !visited[ni][nj])
            {
                q.push({ni, nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;
            }
        }
    }
}
void reset_level_visit()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            level[i][j] = 0;
            visited[i][j] = false;
        }
    }
}
int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        
        cin >> n>>m;
        int si, sj, di, dj;
        cin>>si>>sj>>di>>dj;
        bfs(si, sj);
        if (visited [di][dj])
        cout << level[di][dj]<<endl;
        
        else cout <<-1<<endl;
        reset_level_visit();
    }

    return 0;
}