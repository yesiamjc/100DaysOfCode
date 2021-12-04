
// Given a stack of integers of size N, your task is to complete the function pairWiseConsecutive(), 
// that checks whether numbers in the stack are pairwise consecutive or not. The pairs can be increasing or 
// decreasing, and if the stack has an odd number of elements, the element at the top is left out of a pair. 
// The function should retain the original stack content.

#include <bits/stdc++.h>
using namespace std;
bool pairWiseConsecutive(stack<int> s);
int main()
{
stack<int> s;
        int n, tmp;
        cin>>n;
        while(n--){
            cin>>tmp;
	        s.push(tmp);
	    }
	    if (pairWiseConsecutive(s))cout << "Yes" << endl;
	    else cout << "No" << endl;
	return 0;
}
bool pairWiseConsecutive(stack<int> s)
{
     if(s.size()==0)
       return false;
   while(!s.empty())
   {
       int first=s.top();
       s.pop();
       if(s.empty())
           return true;
       int second=s.top();
       if(abs(first-second )!=1)
           return false;
   }
   return true;
}