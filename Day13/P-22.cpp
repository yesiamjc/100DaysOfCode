
//Given an array arr[] of N non-negative integers representing the height of blocks.
//If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season.

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long trappingWater(int arr[], int n)
    {
      int R = 0;
      for (int i = 1; i < n-1; i++)
      {
       int left = arr[i];
       for (int j=0; j<i; j++)
       {
           left = max(left, arr[j]);
       }
       int right = arr[i];
       for (int j=i+1; j<n; j++)
       {
           right = max(right, arr[j]); 
       }
       R = R + (min(left, right) - arr[i]);   
      }
      return R; 
    }
};
int main()
{
  int n;
  cin >> n;
  int a[n];
  for(int i =0;i<n;i++)
  {
   cin >> a[i];            
  }
  Solution obj;
  cout << obj.trappingWater(a, n) << endl;
  return 0;
}