// Given a string of length N, made up of only uppercase characters 'R' and 'G', where 'R' 
// stands for Red and 'G' stands for Green.Find out the minimum number of characters you need to 
// change to make the whole string of the same colour.

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  int RedOrGreen(int N,string S)
  {
   int r=0, g=0;
   for(auto x: S)
   {
    if(x=='R') 
     r++;
    else 
     g++;
   }
   if(r>g) 
    return g;
   return r;
  }
};
int main()
{
  int N;
  cin>>N;
  string S;
  cin >> S;
  Solution ob;
  cout << ob.RedOrGreen(N,S) << endl;
  return 0;
} 