
//Given an array of positive integers.Find the length of the longest sub-sequence such that 
//elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
  int findLongestConseqSubseq(int arr[], int N)
  {
   sort(arr,arr+N);
   int count=1,ans=1;                                                
   for(int i=0;i<N-1;i++)
   {
    if(arr[i+1]==arr[i]+1)
    {
     count++;
     ans=max(ans,count);
    }
    else if(arr[i]==arr[i+1])
     continue;
    else     
     count=1;
   }
    return ans;
  }
};
int main()
{
  int n,i,a[100001];
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
  return 0;
}