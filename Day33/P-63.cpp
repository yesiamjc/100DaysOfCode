// Delete middle element of a stack.


#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
   void deleteMid(stack<int>&s, int size)
   {
    stack<int> temp;
    int mid=size/2;
    while(mid--)
    {
     temp.push(s.top());
     s.pop();
    }
    s.pop();
    while(!temp.empty())
    {
     s.push(temp.top());
     temp.pop(); 
    }
   }
};
int main()
{
  int size;
  cin>>size;
  stack<int> myStack;
  for(int i=0;i<size;i++)
  {
    int x;
    cin>>x;
    myStack.push(x);    
  }
  Solution ob;
  ob.deleteMid(myStack,myStack.size());
  while(!myStack.empty())
  {
    cout<<myStack.top()<<" ";
    myStack.pop();
  }
  cout<<endl;
  return 0;
}