#include <bits/stdc++.h>
using namespace std;
bool findDuplicate(int arr[], int n, int k)
{
    int findk = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {