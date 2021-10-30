// Given an integer array. The task is to find the maximum of the minimum of every window size in the array.
// Note: Window size varies from 1 to the size of the Array.


#include <bits/stdc++.h>
using namespace std;
void printMaxOfMin(int arr[], int n)
{
    for (int k = 1; k <= n; k++)
    {
     int maxOfMin = INT_MIN;
     for (int i = 0; i <= n - k; i++)
     {
      int min = arr[i];
      for (int j = 1; j < k; j++)
      {
       if (arr[i + j] < min)
       min = arr[i + j];
      }
      if (min > maxOfMin)
      maxOfMin = min;
    }
    cout << maxOfMin << " ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printMaxOfMin(arr, n);
    return 0;
}