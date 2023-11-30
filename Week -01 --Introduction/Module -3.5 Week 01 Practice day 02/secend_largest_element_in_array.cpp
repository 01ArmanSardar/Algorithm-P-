#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.

    sort (arr.begin(),arr.end(),greater<int>());
    int largest=arr[0];
    int secendlargest ;
    for (int i = 1; i < n; i++) {
     if (arr[i]<largest)
     {
       secendlargest =arr[i];
       return secendlargest;
     }
    }
    return -1;

}