for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (i == 0 || j > 0)
                dp[i][j] = INT_MAX;
        }
    }