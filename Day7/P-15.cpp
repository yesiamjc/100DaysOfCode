
//Given an array, rotate the array by one position in clock-wise direction.

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);
int main()
{
  int n;
  cin>>n;
  int a[n] , i;
  for(i=0;i<n;i++)
  cin>>a[i];
  rotate(a, n);
  for (i = 0; i < n; i++)
  cout<<a[i]<<" ";
  cout<<endl;
  return 0;
}
void rotate(int arr[], int n)
{
  int t;
  t = arr[n-1];
  for (int i = n-1;i>0;i--)
  {
      arr[i]=arr[i-1];
  }
  arr[0]=t;
}