#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005] = {-1};
int lcs(string a, int n, string b, int m)
{
    if (n == 0 || m == 0)
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];
    if (a[n - 1] == b[m - 1])
    {
        int ans = lcs(a, n - 1, b, m - 1);
        return dp[n][m] = ans + 1;
    }
    else
    {
        int ans = lcs(a, n - 1, b, m);
        int ans2 = lcs(a, n, b, m - 1);
        return dp[n][m] = max(ans, ans2);
    }
}
int main()
{
    string a, b;
    cin >> a >> b;
    memset(dp,-1,sizeof(dp));//memset (array name,array the je value set korbho,array er size dibho)
    cout << lcs(a, a.size(), b, b.size()) << endl;
    return 0;
}