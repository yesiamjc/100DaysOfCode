// Given an array arr of integers of length N, the task is to find whether it’s possible to construct 
// an integer using all the digits of these numbers such that it would be divisible by 3. If it is possible 
// then print “1” and if not print “0”.
#include <bits/stdc++.h>
using namespace std;
class Solution 
{
  public:
    int isPossible(int N,int arr[]) 
    {
      int num = 0;
      for (int i=0;i<N;i++)
      {
        num = num +arr[i];
      }
      if (num%3==0)
      return 1;
      else 
      return 0;
    }
};
int main() 
{
   int N;
   cin >> N;
   int arr[N];
   for (int i = 0; i < N; i++) cin >> arr[i];
   Solution ob;
   cout << ob.isPossible(N,arr) << endl;
   return 0;
} 
// Actually this problem is based on the mathematical concept, i.e. if a number is divisible by three then 
// summation of all of its digits should also be divisible by 3; 