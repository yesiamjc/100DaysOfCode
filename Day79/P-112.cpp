
// Lucy lives in house number X. She has a list of N house numbers in the society. Distance between houses can be determined by studying the difference between house numbers. Help her find out K closest neighbors

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> Kclosest(vector<int> arr, int n, int x, int k)
    {
        vector<int> v;
        priority_queue<pair<int, int>> maxh;
        for (int i = 0; i < n; i++)
        {
            maxh.push({abs(x - arr[i]), arr[i]});
            if (maxh.size() > k)
                maxh.pop();
        }
        while (maxh.size() > 0)
        {
            pair<int, int> p;
            p = maxh.top();
            v.push_back(p.second);
            maxh.pop();
        }
        sort(v.begin(), v.end());
        return v;
    }
};
int main()
{
    int n, x, k;
    cin >> n >> x >> k;
    vector<int> array(n);
    for (int i = 0; i < n; ++i)
        cin >> array[i];

    Solution obj;
    vector<int> result = obj.Kclosest(array, n, x, k);
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }
    cout << "\n";
    return 0;
}