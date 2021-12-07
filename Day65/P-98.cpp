
// Given an array of N positive integers, print k largest elements from the array. 

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> kLargest(int arr[], int n, int k)
    {
        vector<int> v;
        priority_queue<int> q;
        for (int i = 0; i < n; i++)
            q.push(arr[i]);
        int i = 1;
        while (i <= k)
        {
            int x = q.top();
            v.push_back(x);
            q.pop();
            i++;
        }
        return v;
    }
};
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Solution ob;
    vector<int> result = ob.kLargest(arr, n, k);
    for (int i = 0; i < result.size(); ++i)
        cout << result[i] << " ";
    cout << endl;
    return 0;
}