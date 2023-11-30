#include <bits/stdc++.h>
using namespace std;
int find_element(int arr[], int left, int right, int find)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == find)
            return mid;
        else if (arr[mid] < find)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
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
    int find;
    cin >> find;
    int index = find_element(arr, 0, n - 1, find);
    if (index != -1)
    {
        cout << index << endl;
    }
    else
        cout << "not found";

    return 0;
}