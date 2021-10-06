// Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it
// In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void convertToWave(vector<int>& arr, int n)
     {
      for (int i = 0; i < n; i+=2)
      {
       if (i>0 && arr[i-1] > arr[i] )
       swap(arr[i], arr[i-1]);
       if (i<n-1 && arr[i] < arr[i+1] )
       swap(arr[i], arr[i + 1]);
      }
     } 
};
int main()
{
  int n;
  cin>>n; 
  vector<int> a(n); 
  for(int i=0;i<n;i++)
  cin>>a[i]; 
  Solution ob;
  ob.convertToWave(a, n);
  for(int i=0;i<n;i++)
  cout<<a[i]<<" "; 
  cout<<endl;  
} 