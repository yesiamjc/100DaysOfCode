
// Given a string, remove spaces from it. 


#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string modify(string s)
    {
        string p;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                p.push_back(s[i]);
            }
        }
        return p;
    }
};
int main()
{
    string s;
    getline(cin, s);
    Solution ob;
    cout << ob.modify(s) << endl;
    return 0;
}