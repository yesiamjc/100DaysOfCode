
// Given an array sequence [A1 , A2 ...An], the task is to find the maximum possible sum of increasing 
// subsequence S of length K such that Si1<=Si2<=Si3.........<=Sin.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int max_sum(vector<int> &a, int k)
    {
        int l = a.size();
        int dp[l + 1][k + 1];
        memset(dp, -1, sizeof(dp));
        for (int i = 0; i < l; i++)
        {
            dp[i][1] = a[i];
        }
        for (int p = 2; p <= k; p++)
        {
            for (int i = 1; i < l; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    if (a[i] >= a[j] and dp[j][p - 1] >= 0)
                    {
                        dp[i][p] = max(dp[i][p], a[i] + dp[j][p - 1]);
                    }
                }
            }
        }
        int mx = -1;
        for (int i = 0; i < l; i++)
        {
            mx = max(mx, dp[i][k]);
        }
        return mx;
    }
};
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    Solution ob;
    cout << ob.max_sum(v, k) << endl;
    return 0;
}