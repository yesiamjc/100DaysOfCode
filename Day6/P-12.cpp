
//Move all negative numbers to beginning and positive to end with constant extra space
// gfg solution version

#include <bits/stdc++.h>
using namespace std;
void negativeFirst(int arr[],int n)
{
  int j =0;
  for(int i =0;i<n;i++)
  {
    if(arr[i]<0)
    {
      if(i != j)
      {
         swap(arr[i],arr[j]);
         j++;
      }
    }
  }
}
void print(int arr[], int n)
{
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}
int main()
{
    int n,N, arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    negativeFirst(arr, n);
    print(arr, n);
    return 0;
}