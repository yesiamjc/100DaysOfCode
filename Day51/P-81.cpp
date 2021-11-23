// Given a string str. The task is to find the maximum occurring character in the string str.
// If more than one character occurs the maximum number of time then print the lexicographically 
// smaller character.


#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    char getMaxOccuringChar(string str)
    {
        char c;
        int max = -1;
        map<char, int> m;
        for (int i = 0; i < str.length(); i++)
        {
            m[str[i]]++;
        }
        for (auto i : m)
        {
            if (max < i.second)
            {
                max = i.second;
                c = i.first;
            }
        }
        return c;
    }
};
int main()
{
    string str;
    cin >> str;
    Solution obj;
    cout << obj.getMaxOccuringChar(str) << endl;
}