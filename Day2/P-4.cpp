// Given an array A[] of size n. The task is to find the largest element in it.

#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
int largest(int arr[], int n)
 {
  int l;
  l = arr[0];
  for(int i =1;i<n;i++)
  {
    if (arr[i]>l)
    l =arr[i];
  }
  return l;
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
  cout << ob.largest(arr, n) << "\n";
  return 0;
}

 