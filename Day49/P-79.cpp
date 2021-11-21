
// Given an array A of size N, construct a Sum Array S(of same size) such that S is equal to the sum of all 
// the elements of A except A[i]. Your task is to complete the function SumArray(A, N) which accepts the array
// A and N(size of array).

#include <bits/stdc++.h>
using namespace std;
void SumArray(int[], int);
void SumArray(int arr[], int n)
{
    int sum = 0;
    sum = accumulate(arr, arr + n, sum);

    for (int i = 0; i < n; i++)
    {
        arr[i] = sum - arr[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    SumArray(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}