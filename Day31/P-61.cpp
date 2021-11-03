// Given a string S, check if it is palindrome or not.


#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
 int isPalindrome(string S)
 {
  string s="";
  for(int i=0;i<S.size();i++)
  {
      s+=S[i];
  }
  reverse(s.begin(),s.end());
  if(s==S)
  {
      return 1;
  }
  return 0;  
 }
};
int main() 
{
    string s;
   	cin >> s;
   	Solution ob;
   	cout << ob.isPalindrome(s) << "\n";
    return 0;
} 