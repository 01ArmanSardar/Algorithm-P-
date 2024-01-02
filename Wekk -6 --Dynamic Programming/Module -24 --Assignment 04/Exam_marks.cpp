#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n>>m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool dp[n + 1][m + 1];
        dp[0][0] = true;
        for (int i = 1; i <= m; i++)
        {
            dp[0][i] = false;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (a[i - 1] <= j)
                {

                    bool choice1 = dp[i - 1][j - a[i - 1]];
                    bool choice2 = dp[i - 1][j];
                    dp[i][j] = choice1 || choice2;
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[n][m])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}