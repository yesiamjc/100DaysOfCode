// Given a string S consisting only of opening and closing parenthesis 'ie '('  and ')',
// find out the length of the longest valid(well-formed) parentheses substring.
// NOTE: Length of the smallest valid substring ( ) is 2.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaxLen(string s)
    {
        int len = 0;
        int n = s.length(), left = 0, right = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                ++left;
            else
                ++right;
            if (left == right)
                len = max(len, 2 * right);
            else if (right > left)
                left = right = 0;
        }
        left = right = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '(')
                ++left;
            else
                ++right;
            if (left == right)
                len = max(len, 2 * right);
            else if (left > right)
                left = right = 0;
        }
        return len;
    }
};
int main()
{
    string S;
    cin >> S;
    Solution ob;
    cout << ob.findMaxLen(S) << endl;
    return 0;
}