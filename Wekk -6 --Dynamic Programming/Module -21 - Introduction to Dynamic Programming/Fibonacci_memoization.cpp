#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll int N = 1e5 + 5;
ll int save[N];
 ll int fibo( ll int n)
{
    if (n == 1 || n == 0)
        return 1;
    if (save[n] != -1)
    {
        return save[n];
    }
   ll int ans1 = fibo(n - 1);
   ll int ans2 = fibo(n - 2);
    save[n] = ans1 + ans2;
    //return save[n];
    return ans1+ans2;
}
int main()
{
   ll int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        save[i] = -1;
    }
    cout << fibo(n) << endl;

    return 0;
}