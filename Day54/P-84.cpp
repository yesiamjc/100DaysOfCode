
// Given a string S consisting of opening and closing parenthesis '(' and ')'. 
// Find length of the longest valid parenthesis substring.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxLength(string S)
    {
        int open = 0, close = 0, ans = 0;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '(')
                open++;
            if (S[i] == ')')
                close++;

            if (close > open)
                close = 0, open = 0;
            else if (close == open)
                ans = max(ans, open + close);
        }
        open = 0, close = 0;
        for (int i = S.size() - 1; i >= 0; i--)
        {
            if (S[i] == '(')
                open++;
            if (S[i] == ')')
                close++;

            if (open > close)
                close = 0, open = 0;
            else if (close == open)
                ans = max(ans, open + close);
        }
        return ans;
    }
};
int main()
{
    string S;
    cin >> S;

    Solution ob;
    cout << ob.maxLength(S) << "\n";
    return 0;
}