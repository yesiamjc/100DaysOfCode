//Given an array a of integers of length n, find the nearest smaller number for every element such that 
//the smaller element is on left side.If no small element present on the left print -1.


#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
  vector<int> leftSmaller(int n, int a[])
  {
   stack<int> s ; 
   vector<int> v ; 
   for(int i  = 0 ; i <n ; i++)
   {
    if(s.empty())
    {
     v.push_back(-1); 
    }
    else if(!s.empty() && s.top() < a[i])
    {
     v.push_back(s.top()); 
    }
    else  if(!s.empty() && s.top() >= a[i])
    {
     while(!s.empty() && s.top() >=  a[i])
     {
      s.pop(); 
     }
     if(s.empty() || s.top() == a[i])
     {
      v.push_back(-1); 
     }
     else if(s.top() < a[i])
     {
      v.push_back(s.top()); 
     }
    }
    s.push(a[i]); 
   }
   return v ;
  }
};
int main()
{
 int n;
 cin>>n;
 int a[n];
 for(int i = 0;i < n;i++)
  cin>>a[i];
 Solution ob;
 vector<int> ans = ob.leftSmaller(n, a);
 for(int i = 0;i < n;i++)
  cout<<ans[i]<<" ";
 cout<<endl;
 return 0;
}