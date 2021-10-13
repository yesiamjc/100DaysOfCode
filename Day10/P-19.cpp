
//Given an array of N integers, and an integer K, 
//find the number of pairs of elements in the array whose sum is equal to K.

#include <bits/stdc++.h>
using namespace std;
class Solution{   
  public:
   int getPairsCount(int arr[], int n, int k) 
   {
     int count=0;
     unordered_map<int,int> freq;
     for(int i=0;i<n;i++)
     {
       if(arr[i]>=k)
        continue;
       else
        {
          if(freq.find(k-arr[i])!=freq.end())
           count+=freq[k-arr[i]];
           freq[arr[i]]++;
        }
     }
    return count;
    }
};
int main() 
{
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) 
  {
   cin >> arr[i];
  }
  Solution ob;
  auto ans = ob.getPairsCount(arr, n, k);
  cout << ans <<endl;
  return 0;
}