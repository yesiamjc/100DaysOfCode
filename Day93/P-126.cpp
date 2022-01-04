
// Given an input stream arr[] of n integers. Find the Kth largest element for each element in the stream and if 
// the Kth element doesn't exist, return -1.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> kthLargest(int k, int arr[], int n)
    {
        int l = 0, r = n - 1;
        vector<int> v;
        if (n == 1 && k == 1)
        {
            v.push_back(arr[0]);
            return v;
        }
        priority_queue<int, vector<int>, greater<int>> heap;
        while (l <= r)
        {
            heap.push(arr[l]);
            if (heap.size() < k)
            {
                v.push_back(-1);
            }
            else if (heap.size() > k)
            {
                heap.pop();
            }
            if (heap.size() == k)
            {
                v.push_back(heap.top());
            }
            l++;
        }
        return v;
    }
};
int main()
{
    int k, n;
    cin >> k >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Solution ob;
    vector<int> v = ob.kthLargest(k, arr, n);
    for (int i : v)
        cout << i << " ";
    cout << endl;
    return 0;
}