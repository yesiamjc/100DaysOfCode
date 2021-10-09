
//Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

#include<iostream>
using namespace std;
int main()
{
  int n1,n2,i,j,flag;
  cin>>n1;
  cin>>n2;
  int arr1[n1];
  for(i=0;i<n1;i++)
  {
    cin>>arr1[i];
  }
  int arr2[n2];
  for(i=0;i<n2;i++)
  {
    cin>>arr2[i];
  }
  for(i=0;i<n1;i++)
  {
    cout<<arr1[i]<<" ";
  }
  for(j=0;j<n2;j++)
  {
    flag=0;
    for(i=0;i<n1;i++)
    {
      if(arr1[i]==arr2[j])
      {
        flag=1;
        break;
      }
    }
    if(flag!=1)
    {
      cout<<arr2[j]<<" ";
    }
  }
  return 0;
}