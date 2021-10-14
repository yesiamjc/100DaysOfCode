
//Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
 public:    
  vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
  {
   vector<int> v1;
   int i=0,j=0;
   while(i<n1 && j<n2)
   {
    if(A[i]<B[j])
    {
     while(A[i]==A[i+1])
     i++;
     i++;
    }
    else if(A[i]>B[j])
    {
     while(B[j]==B[j+1])
     j++;
     j++;
    }
    else if(A[i]==B[j])
    {
     while(A[i]==A[i+1])
     i++;
     while(B[j]==B[j+1])
     j++;
     v1.push_back(A[i]);
     i++;
     j++;
    }
   }
   i=j=0;
   vector<int> v2;
   while(i<v1.size() && j<n3)
   {
    if(v1[i]<C[j])
    {
     i++;
    }
    else if(v1[i]>C[j])
    {
     j++;
    }
    else if(v1[i]==C[j])
    {
     while(v1[i]==v1[i+1])
     i++;
     while(C[j]==C[j+1])
     j++;
     v2.push_back(v1[i]);
     i++;
     j++;
    }
   }
   v1.clear();
   return v2;   
   }
};
int main ()
{
  int n1, n2, n3; 
  cin >> n1 >> n2 >> n3;
  int A[n1];
  int B[n2];
  int C[n3];
  for (int i = 0; i < n1; i++)
   cin >> A[i];
  for (int i = 0; i < n2; i++)
   cin >> B[i];
  for (int i = 0; i < n3; i++)
   cin >> C[i];
   Solution ob;
   vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
   if (res.size () == 0) 
    cout << -1;
   for (int i = 0; i < res.size (); i++) 
   cout << res[i] << " "; 
   cout << endl;  
}