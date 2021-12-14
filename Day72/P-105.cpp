
// You are given an array nums. Your task is to complete the function getXor to return the XOR 
// of the given range a and b.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int getXor(vector<int> &nums, int a, int b)
    {
        int res = nums[b--];
        while (b >= a)
            res ^= nums[b--];
        return res;
    }
};
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    if (a > b)
        swap(a, b);
    Solution obj;
    int ans = obj.getXor(nums, a, b);
    cout << ans << "\n";
    return 0;
}