#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int nums[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort (nums,nums+n);
    for (int i=0;i<n;i++)
    {
        cout <<nums[i]<<" ";
    }

    return 0;
}