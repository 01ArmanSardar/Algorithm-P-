#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int val[n];
    int wgt[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> wgt[i];
    }
    int s;
    cin >> s;
    int dp[n + 1][s + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            // it's call DP state
            /*
             if (wgt[i - 1] <= j)
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wgt[i - 1]], dp[i - 1][j]);
            }
            else
                dp[i][j] = dp[i - 1][j]; */
            // this is normal implimantation for bottom up approch
            /*
              if (wgt[i - 1] <= j)
               {
                   int opt1 = dp[i - 1][j - wgt[i - 1]] + val[i - 1];
                   int opt2 = dp[i - 1][j];

                   dp[i][j] = max(opt1, opt2);
               }
               else
               {
                   dp[i][j] = dp[i - 1][j];
               } */
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
