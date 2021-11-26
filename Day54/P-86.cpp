
// Given an integer array. The task is to find the maximum of the minimum of every window size in the array.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> maxOfMin(int arr[], int n)
    {
        stack<int> s;
        vector<int> ans(n, 0), l(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            if (s.empty())
                l[i] = i + 1;
            else
                l[i] = i - s.top();
            s.push(i);
        }
        while (!s.empty())
            s.pop();
        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            if (s.empty())
                l[i] += n - 1 - i;
            else
                l[i] += s.top() - i - 1;
            s.push(i);
            ans[l[i] - 1] = max(ans[l[i] - 1], arr[i]);
        }
        for (int i = n - 2; i >= 0; i--)
            ans[i] = max(ans[i + 1], ans[i]);
        return ans;
    }
};
    int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Solution ob;
    vector<int> res = ob.maxOfMin(a, n);
    for (int i : res)
        cout << i << " ";
    cout << endl;

    return 0;
}