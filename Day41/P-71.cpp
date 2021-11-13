// Given two strings string1 and string2, remove those characters from first string(string1) 
//which are present in second string(string2). Both the strings are different and contain only 
//lowercase characters.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeChars(string string1, string string2)
    {
        set<char> s;
        for (auto x : string2)
            s.insert(x);
        string str = "";
        for (auto x : string1)
        {
            if (s.find(x) == s.end())
                str += x;
        }
        return str;
    }
};
int main()
{
    string string1, string2;
    cin >> string1;
    cin >> string2;
    Solution ob;
    cout << ob.removeChars(string1, string2) << endl;
    return 0;
}