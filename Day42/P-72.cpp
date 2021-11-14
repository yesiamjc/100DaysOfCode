// Given a string S and another string patt. Find the character in patt that is present 
// at the minimum index in S.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string printMinIndexChar(string S, string patt)
    {
        string a = "";
        for (int i = 0; i < S.size(); i++)
        {
            for (int j = 0; j < patt.size(); j++)
            {
                if (S[i] == patt[j])
                {
                    a = S[i];
                    return a;
                    break;
                }
            }
        }
        return "$";
    }
};
int main()
{
    string str;
    cin >> str;
    string patt;
    cin >> patt;
    Solution obj;
    cout << obj.printMinIndexChar(str, patt) << endl;
    return 0;
}