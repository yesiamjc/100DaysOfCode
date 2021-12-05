
// Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” 
// are correct in exp.
// For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool ispar(string x)
    {
        map<char, char> pairs;
        pairs[')'] = '(';
        pairs['}'] = '{';
        pairs[']'] = '[';
        char chars[x.length()];
        for (int i = 0; i < sizeof(chars); i++)
        {
            chars[i] = x[i];
        }
        stack<char> final;
        for (int i = 0; i < sizeof(chars); i++)
        {
            if (pairs[chars[i]] == 0)
            {
                final.push(chars[i]);
            }
            else if (final.empty())
            {
                return false;
            }
            else if (pairs[chars[i]] == final.top())
            {
                final.pop();
            }
            else
            {
                return false;
            }
        }
        if (final.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    string a;
    cin >> a;
    Solution obj;
    if (obj.ispar(a))
        cout << "balanced" << endl;
    else
        cout << "not balanced" << endl;
}