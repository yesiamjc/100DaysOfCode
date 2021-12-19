
// Given an array Arr of N positive integers, find K largest elements from the array.  The output elements should be printed in decreasing order.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> kLargest(int arr[], int n, int k)
    {
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
        }
        vector<int> res;
        int count(0);
        while (count < k)
        {
            res.push_back(pq.top());
            pq.pop();
            count++;
        }
        return res;
    }
};
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.kLargest(arr, n, k);
    for (auto x : ans)
    {
        cout << x << " ";
        cout << "\n";
        return 0;
    }
}