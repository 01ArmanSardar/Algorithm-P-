#include <bits/stdc++.h>
using namespace std;
int knapsack(int n, int s, int val[], int wgt[])
{
    //basecase
    if (n==0 || s==0) return 0;
    //
    if (wgt[n-1]<=s)
    {
    int opt1 = knapsack(n - 1, s - wgt[n - 1], val, wgt) + val[n - 1];
    int opt2 = knapsack(n - 1, s, val, wgt);
    return max(opt1, opt2);
    }
    else 
    {
      return  knapsack(n - 1, s, val, wgt); 
    }
}
int main()
{
    int n, s;
    cin >> n >> s;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
    }
   cout << knapsack(n,s,v,w);

    return 0;
}