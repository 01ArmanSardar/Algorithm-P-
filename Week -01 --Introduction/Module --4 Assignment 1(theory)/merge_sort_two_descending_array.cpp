#include <bits/stdc++.h>
using namespace std;
void  mergearray (int arr[],int arr2[],int n,int m,int arr3[])
{
    int i=0,j=0,k=0;
    while (i<n && j<m)
    {
        if (arr[i]<arr2[j])
        arr3[k++]=arr[i++];
        else 
        arr3[k++]=arr2[j++];
    }
    while (i<n)
    arr3[k++]=arr[i++];
    while (j<m)
    arr3[k++]=arr2[j++];
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
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int arr3[n+m];
mergearray(arr,arr2,n,m,arr3);
for (int i=0;i<n+m;i++)
{
    cout <<arr3[i]<<" ";
}


    return 0;
}