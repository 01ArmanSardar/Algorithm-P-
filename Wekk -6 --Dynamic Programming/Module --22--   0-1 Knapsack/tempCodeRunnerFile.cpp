   if (wgt[i - 1] <= j)
            {
                int opt1 = dp[i - 1][j - wgt[i - 1]] + val[i - 1];
                int opt2 = dp[i - 1][j];

                dp[i][j] = max(opt1, opt2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }