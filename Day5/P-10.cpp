
//Given an array arr[] and an integer K where K is smaller than size of array, the task is to 
//find the Kth smallest element in the given array. It is given that all array elements are distinct.

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k)
    {
      sort(arr,arr+r+1);
      return arr[k-1];
    }
};
int main()
{
  int number_of_elements;
  cin>>number_of_elements;
  int a[number_of_elements];
  for(int i=0;i<number_of_elements;i++)
   cin>>a[i]; 
  int k;
  cin>>k;
  Solution ob;
  cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
  return 0;
}