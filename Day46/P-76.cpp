
// Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the 
// English Alphabet.


#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkPangram(string &str)
    {
        int n = str.length();
        int flag = 0;

        transform(str.begin(), str.end(), str.begin(), ::tolower);

        for (char j = 'a'; j <= 'z'; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (str[i] == j)
                {
                    flag++;
                    break;
                }
            }
        }
        if (flag == 26)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    string str;
    getline(cin, str);
    Solution obj;
    if (obj.checkPangram(str) == true)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return (0);
}
