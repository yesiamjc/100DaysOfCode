
//Given an array of integers (A[])  and a number x, 
//find the smallest subarray with sum greater than the given value.

#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int smallestSubWithSum(int arr[], int n, int x)
    {
       int minLen = n + 1;
       for (int s=0; s<n; s++)
       {
        int currSum = arr[s];
        if (currSum > x)
          return 1;
         for (int e=s+1; e<n; e++)
          {
           currSum += arr[e];
           if (currSum > x && (e - s+ 1) < minLen)
            minLen = (e - s + 1);
          }
     }
     return minLen;  
    }
};
int main() 
{
 int n,x;
 cin>>n>>x;
 int a[n];
 for(int i=0;i<n;i++)
  cin>>a[i];
 Solution obj;
 cout<<obj.smallestSubWithSum(a,n,x)<<endl;
 return 0;
}