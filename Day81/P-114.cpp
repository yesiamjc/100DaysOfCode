
// Given a string s of lowercase alphabets and a number k, the task is to print the minimum value of the string 
// after removal of ‘k’ characters. The value of a string is defined as the sum of squares of the count of each 
// distinct character.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minValue(string s, int k)
    {
        int sum = 0;
        unordered_map<char, int> m;
        priority_queue<int> maxh;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }
        for (auto it = m.begin(); it != m.end(); it++)
        {

            maxh.push(it->second);
        }
        while (maxh.size() > 0 && k--)
        {
            int x = maxh.top();
            maxh.pop();
            x--;
            maxh.push(x);
        }
        while (maxh.size() > 0)
        {
            sum = sum + pow(maxh.top(), 2);
            maxh.pop();
        }

        return sum;
    }
};
int main()
{
    string s;
    int k;
    cin >> s >> k;
    Solution ob;
    cout << ob.minValue(s, k) << "\n";
    return 0;
}