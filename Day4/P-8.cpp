//You are given a string s. You need to reverse the string.

#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str);
int main()
{
  string s;
  cin >> s;
  cout << reverseWord(s) << endl;
  return 0;
}
string reverseWord(string str)
{
    int i =0;//0,1,2,3,4
    int n = str.length();//5
    int k = n-1;//4
    while(i<k)
    {
     char e = str[i];  
     str[i] =str[k];
     str[k] = e;
     i++;
     k--;
    }
    return str;
}