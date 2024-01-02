#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int unbounded_knapsack(int n, int s, int val[], int wgt[])
{
    if (n == 0 || s == 0)
        return 0;
    if (dp[n][s] != -1)
        return dp[n][s];
    if (wgt[n - 1] <= s)
    {
        int ch1 = val[n - 1] + unbounded_knapsack(n, s - wgt[n - 1], val, wgt); // nie dekbo
        int ch2 = unbounded_knapsack(n - 1, s, val, wgt);
        return dp[n][s] = max(ch1, ch2);
    }
    else
       return dp[n][s]= unbounded_knapsack(n - 1, s, val, wgt);
}
int main()
{
    int n, s;
    cin >> n >> s;
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
    cout << unbounded_knapsack(n, s, val, wgt) << endl;
    return 0;
}