
// Given two strings S1 and S2 print whether they contain any common subsequence (non empty) or not.
// NOTE: Print 1 if they have a common subsequence (non empty) else 0.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int commonSubseq(string S1, string S2)
    {
        for (int i = 0; i < S2.size(); i++)
        {
            int idx = S1.find(S2[i]);
            if (idx == -1)
                continue;
            else
            {
                return 1;
            }
        }
        return 0;
    }
};
int main()
{
    string S1, S2;
    cin >> S1 >> S2;
    Solution ob;
    cout << ob.commonSubseq(S1, S2) << endl;
    return 0;
}