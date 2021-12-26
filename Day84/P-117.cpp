
// Given an array A[] of N positive integers and two positive integers K1 and K2. Find the sum of all elements
// between K1th and K2th smallest elements of the array. It may be assumed that (1 <= k1 < k2 <= n).

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long smallest_element(long long A[], long long n, long long K)
    {
        priority_queue<int> maxheap;
        for (long long i = 0; i < n; i++)
        {
            maxheap.push(A[i]);
            if (maxheap.size() > K)
            {
                maxheap.pop();
            }
        }
        return maxheap.top();
    }
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2)
    {
        sort(A, A + N);
        long long first = smallest_element(A, N, K1);
        long long second = smallest_element(A, N, K2);
        long long sum = 0;
        for (long long i = 0; i < N; i++)
        {
            if (A[i] > first && A[i] < second)
            {
                sum += A[i];
            }
        }
        return sum;
    }
};
int main()
{
    long long n, k;
    cin >> n;
    long long a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long k1, k2;
    cin >> k1 >> k2;
    Solution ob;
    cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
    return 0;
}