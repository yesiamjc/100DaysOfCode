// Given a binary string S. The task is to count the number of substrings that start and end with 1.
// For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.


#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long binarySubstring(int n, string a)
    {
        long c = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '1')
            {
                c++;
            }
        }
        return (c * (c - 1)) / 2;
    }
};
int main()
{
    int n, count;
    string a;
    count = 0;
    cin >> n;
    cin >> a;
    Solution obj;
    cout << obj.binarySubstring(n, a) << endl;
}