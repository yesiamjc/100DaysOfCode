
//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    void sort012(int a[], int n)
    {
      int low=0;
      int high=n-1;
      int mid=0;
      while(mid<=high)
      {
        if(a[mid]==0)
        {
         swap(a[low],a[mid]);
         low++;
         mid++;
        }
        else
        {
         if(a[mid]==1)
         {
          mid++;
         }
         else
         {
          swap(a[mid],a[high]);
          high--;
         }
        }
       }
    }
};
int main()
{
 int n;
 cin >>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
     cin >> a[i];
 }

 Solution ob;
 ob.sort012(a, n);   
 cout<<a[0];
 for(int i=1;i<n;i++)
 {
   cout<<" "<<a[i];
 }
    return 0;
}
