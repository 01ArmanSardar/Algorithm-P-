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
   cout << knapsack(n, s, val, wgt);
    return 0;
}