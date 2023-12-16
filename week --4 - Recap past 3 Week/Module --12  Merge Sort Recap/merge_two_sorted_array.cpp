#include <bits/stdc++.h>
using namespace std;
void merge(int ar[],int l,int mid,int r)
{

}
int main()
{
   int n;
   cin >>n;
   int ar[n];
   for (int i=0;i<n;i++)
   {
    cin>>ar[i];
   } 
   merge(ar,0,3,n-1);
   for (int i=0;i<n;i++)
   {
    cout <<ar[i]<<" ";
   }
    return 0;
}