#include <bits/stdc++.h>
using namespace std;
void merge(int ar[], int l, int mid, int r)
{
    int leftsize = mid - l + 1;
    int rightsize = r - mid;
    int L[leftsize], R[rightsize];
    int k = 0;
    for (int i = l; i <= mid; i++)
    {
        L[k] = ar[i];
        k++;
    }
    k = 0;
    for (int i = mid + 1; i <= r; i++)
    {
        R[k] = ar[i];
        k++;
    }
    int i = 0, j = 0;
    int cur = l;

    while (i < leftsize && j < rightsize)
    {
        if (L[i] <= R[j])
        {
            ar[cur] = L[i];
            i++;
        }
        else
        {
            ar[cur] = R[j];
            j++;
        }
        cur++;
    }
    while (i < leftsize)
    {
        ar[cur] = L[i];
        i++;
        cur++;
    }
    while (j < rightsize)
    {
        ar[cur] = R[j];
        j++;
        cur++;
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    merge(ar, 0, 3, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}