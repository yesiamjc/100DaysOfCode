// Given a list of N words. Count the number of words that appear exactly twice in the list.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countWords(string list[], int n)
    {
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[list[i]]++;
        }

        int res = 0;
        for (auto x : mp)
        {
            if (x.second == 2)
            {
                res++;
            }
        }
        return res;
    }
};
int main()
{
    int n;
    cin >> n;
    string list[n];
    for (int i = 0; i < n; i++)
        cin >> list[i];
    Solution ob;
    cout << ob.countWords(list, n) << endl;
    return 0;
}
