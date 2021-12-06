
// An encoded string (s) is given, the task is to decode it. The pattern in which the strings 
// were encoded were as follows

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string decodedString(string s)
    {
        stack<int> count;
        stack<string> result;
        int index = 0;
        string curr_string = "";
        while (index < s.length())
        {
            if (isdigit(s[index]))
            {
                int num = 0;
                while (isdigit(s[index]))
                {
                    num = 10 * num + (s[index] - '0');
                    index++;
                }
                count.push(num);
            }
            else if (s[index] == '[')
            {
                result.push(curr_string);
                curr_string = "";
                index = index + 1;
            }
            else if (s[index] == ']')
            {
                int n = count.top();
                count.pop();
                string res = result.top();
                result.pop();
                for (int i = 0; i < n; ++i)
                {
                    res += curr_string;
                }
                curr_string = res;
                index = index + 1;
            }
            else
            {
                curr_string += s[index];
                index = index + 1;
            }
        }
        return curr_string;
    }
};
int main()
{
    string s;
    cin >> s;
    Solution ob;
    cout << ob.decodedString(s) << endl;
    return 0;
}