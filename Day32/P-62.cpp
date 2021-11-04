
// Given a mathematical equation using numbers/variables and +, -, *, /. Print the equation in reverse.


#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    string reverseEqn (string s)
    {
      stack<string> st;
      string res;
      int n = s.length();
      for(int i=0;i<n;i++)
      {
       if(isdigit(s[i]))
       {
        string aux;
        aux+= s[i];
        while(i+1<n && isdigit(s[i+1]))
        {
         aux+=s[i+1];
         i++;
        }
        st.push(aux);
       }
       else
       {
        string aux;
        aux+= s[i];
        st.push(aux);
       }
      }        
      while(!st.empty())
      {
       res+= st.top();
       st.pop();
      }
      return res;
     }
};
int main()
{
   string s; cin >> s;
   Solution ob;
   cout <<ob.reverseEqn (s) << endl;
}