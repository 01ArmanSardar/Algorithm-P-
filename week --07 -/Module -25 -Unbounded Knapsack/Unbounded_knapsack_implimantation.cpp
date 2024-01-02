#include <bits/stdc++.h>
using namespace std;
int unbounded_knapsack(int n, int s, int val[], int wgt[])
{
    if (n == 0 || s == 0)
        return 0;
    if (wgt[n - 1] <= s)
    {
        int ch1 = val[n - 1] + unbounded_knapsack(n, s - wgt[n - 1], val, wgt); // nie dekbo
        int ch2 = unbounded_knapsack(n - 1, s, val, wgt);
        return max(ch1, ch2);
    }
    else
        unbounded_knapsack(n - 1, s, val, wgt);
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
cout <<unbounded_knapsack(n,s,val,wgt)<<endl;
    return 0;
}