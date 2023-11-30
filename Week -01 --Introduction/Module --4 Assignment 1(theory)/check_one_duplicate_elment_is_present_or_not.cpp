#include <bits/stdc++.h>
using namespace std;
bool findDuplicate(int arr[], int n, int k)
{
    int findk = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            findk = mid;
            high = mid - 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    int duplicatek = -1;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            duplicatek = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return findk != duplicatek;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    if (findDuplicate(arr, n, k))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO";

    return 0;
}