// Given an array of length N consisting of only 0s and 1s in random order. 
// Modify the array to segregate 0s on left side and 1s on the right side of the array.

#include <bits/stdc++.h>
using namespace std;
class Solution{  
 public:
   void segregate0and1(int arr[], int n) 
   {
    int k=0;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
     if(arr[i]==0)
     {
      arr1[k++]=arr[i];
     }
    }
    for(int i=0;i<n;i++)
    {
     if(arr[i]==1)
     {
      arr1[k++]=arr[i];
     }
    }
    for(int i=0;i<n;i++)
    {
     arr[i]=arr1[i];
    }
   }
};
int main() 
{
 int n;
 cin >> n;
 int arr[n];
 for (int i = 0; i < n; i++) 
 {
     cin >> arr[i];
 }
  Solution ob;
 ob.segregate0and1(arr, n);
 for (int i = 0; i < n; i++) 
 {
     cout << arr[i] << " ";
 } 
 return 0;
}