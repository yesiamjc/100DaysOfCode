
// Given an array of digits (values are from 0 to 9), find the minimum possible sum of two 
// numbers formed from digits of the array. All digits of given array must be used to form the two numbers.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long int minSum(int arr[], int n)
    {
        long long a = 0, b = 0;
        sort(arr, arr + n);

        for (long long i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                a = a * 10 + arr[i];
            else
                b = b * 10 + arr[i];
        }
        return a + b;
    }
};
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Solution ob;
    cout << ob.minSum(arr, n) << endl;
    return 0;
}
