// Given an integer N which has odd number of digits, find whether the given number is a balanced or not.


#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	bool balancedNumber(string N)
	{
	  int sum =0; 
      int sum1=0;
      int n = N.length();
      int m = N.length()/2;
      for(int i=0; i<m; i++)
      {
        sum +=N[i];
      }
      for(int i=n; i>m; i--)
      {
        sum1 +=N[i];
      }
      for(int i=0; i<n; i++)
      {
        if(sum != sum1)
          return false;
        else
          return true;
      }
      return true;
    }
};
int main()
{
  string N;
  cin>>N;
  Solution ob;
  cout<<ob.balancedNumber(N)<<endl;
  return 0;
}