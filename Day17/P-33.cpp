
//Given an array arr[] of N integers, calculate the median

#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
   int find_median(vector<int> v)
   {
	int n = v.size();
    sort(v.begin(), v.end());
    if(n%2==0)
    {
      return (v[n/2-1]+v[n/2])/2;
    }
    return v[n/2];
   }
};
int main()
{
  int n; 
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++)
   cin>>v[i];
  Solution ob;
  int ans = ob.find_median(v);
  cout << ans <<"\n";
  return 0;
}