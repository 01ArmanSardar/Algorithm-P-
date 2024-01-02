#include <bits/stdc++.h>
using namespace std;
int dp[100005];
bool MakeIt(int current, int target)
{
    if (current == target)
        return true;
    if (current > target)
        return false;
    if (dp[current]!= -1)
        return dp[current];
    int choice2 = MakeIt(current + 3, target);
    int choice1 = MakeIt(current * 2, target);
    return dp[current]= choice1 || choice2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        for (int i = 0; i <= N; i++)
        {
            dp[i]=-1;
        }
        if (MakeIt(1, N))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}