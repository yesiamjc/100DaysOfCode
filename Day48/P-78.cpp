
// Given an sorted array A of size N. Find number of elements which are less than or equal to given element X.


#include <bits/stdc++.h>
using namespace std;
int countOfElements(int arr[], int n, int x);
int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> x;
    cout << countOfElements(arr, n, x) << endl;
    return 0;
}
int countOfElements(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
        {
            count += 1;
        }
    }
    return count;
}