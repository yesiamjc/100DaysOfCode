
// Given a string S of lowercase alphabets, check if it is isogram or not.
// An Isogram is a string in which no letter occurs more than once.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isIsogram(string s)
    {
        unordered_set<int> ss;
        for (int i = 0; i < s.size(); i++)
        {
            ss.insert(s[i]);
        }
        return s.size() == ss.size();
    }
};
int main()
{
    string s;
    cin >> s;
    Solution obj;
    cout << obj.isIsogram(s) << endl;
    return 0;
}