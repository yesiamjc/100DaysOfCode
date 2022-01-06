

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minOperations(int arr[], int n, int k)
    {
        int operation = 0;
        priority_queue<int, vector<int>, greater<int>> p;
        for (int i = 0; i < n; i++)
        {
            p.push(arr[i]);
        }
        while (!p.empty())
        {
            int a = p.top();
            p.pop();
            int b = p.top();
            p.pop();
            int sum = a + b;
            if (a >= k and b >= k)
            {
                break;
            }
            p.push(sum);
            operation++;
        }
        return operation;
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
    Solution obj;
    int ans = obj.minOperations(arr, n, k);
    cout << ans << "\n";
    return 0;
}