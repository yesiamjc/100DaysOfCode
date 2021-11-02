//Given N integers, the task is to insert those elements in the queue.
//Also, given M integers, task is to find the frequency of each number in the Queue.


#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void insert(queue<int> &q, int k)
    {
        q.push(k);
    }
    int findFrequency(queue<int> &q, int k)
    {
      queue<int>aux=q;
      unordered_map<int,int>dict;
      while(!aux.empty())
      {
        dict[aux.front()]++;
        aux.pop();
      }
      return dict.find(k)!=dict.end()?dict[k]:0;
    }
    
};
int main()
{
   queue<int> q;
   int n, k;
   cin>>n;
   Solution obj;
   for(int i = 0;i<n;i++)
   {
	cin >> k;
	obj.insert(q, k);
   }
   int m;
   cin >> m;
   for(int i = 0;i<m;i++)
   {
	cin >> k;
	int f = obj.findFrequency(q, k);
	if(f != 0)
    {
	  cout<<f<<endl;
	}
	else
    {
	 cout<<"-1\n";
	}
   }
   return 0;
}