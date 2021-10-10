
//Given an array Arr[] of N integers. Find the contiguous sub-array
//(containing at least one number) which has the maximum sum and return its sum.

// Based on Kadane's Algorithm:

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long maxSubarraySum(int arr[], int n)
    {
     int maxTill = INT_MIN, max = 0;
     for (int i = 0; i < n; i++)
     {
      max = max + arr[i];
      if (maxTill < max)
       maxTill = max;
      if (max < 0)
       max = 0;
     }
     return maxTill;
    }
};
int main()
{
  int n;
  cin>>n; 
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  Solution ob;
  cout << ob.maxSubarraySum(a, n) << endl;  
  return 0;
}
