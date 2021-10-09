
//Move all negative numbers to beginning and positive to end with constant extra space
// My version

#include <bits/stdc++.h>
using namespace std;
void negativeFirst(int arr[], int n)
{
  int k=0,N[n];
  for (int i =0;i<n;i++)
  {
      if (arr[i]<0)
      {
        N[k]=arr[i];
        k++;
      }
  }
  for (int i =0;i<n;i++)
  {
      if (arr[i]>0)
      {
        N[k]=arr[i];
        k++;
      }
  }
}
void print(int arr[], int n)
{
   int N[n];
   for(int i=0;i<n;i++)
   {
       cout<<N[i]<<" ";
   }
}
int main()
{
    int n, arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    negativeFirst(arr,n);
    print(arr, n);
    return 0;
}