#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int knapsack(int n, int s, int val[], int wgt[])
{

    // basecase
    if (n == 0 || s == 0)
        return 0;
    //
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }
    if (wgt[n - 1] <= s)
    {
        int opt1 = knapsack(n - 1, s - wgt[n - 1], val, wgt) + val[n - 1];
        int opt2 = knapsack(n - 1, s, val, wgt);

        dp[n][s] = max(opt1, opt2);
        return dp[n][s];
    }
    else
    {
        dp[n][s] = knapsack(n - 1, s, val, wgt);
        return dp[n][s];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s;
        cin >> s;
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

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                dp[i][j] = -1;
            }
        }
        cout << knapsack(n, s, val, wgt);
    }
    return 0;
}