
// Given an array of n elements, where each element is at most k away from its target position, 
// you need to sort the array optimally.

#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector <int> nearlySorted(int arr[], int num, int K){
         priority_queue<int,vector<int>,greater<int>>q;
       for(int i=0;i<num;i++){
           q.push(arr[i]);
       }
       vector<int>v;
       while(q.empty()==false){
           v.push_back(q.top());
           q.pop();
       }
       return v;
    }
};
int main()
 {
	    int num, K;
	    cin>>num>>K;
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	    cout<<endl;
	return 0;
}