// Ishaan is playing with strings these days. He has found a new string. He wants to modify it as per the 
// following rules to make it valid:

// The string should not have three consecutive same characters (Refer example for explanation).
// He can add any number of characters anywhere in the string. 
// Find the minimum number of characters which Ishaan must insert in the string to make it valid.


#include <bits/stdc++.h>
#define br     \
    char xx;   \
    cin >> xx; \
    cout << xx << endl;
#define lli long long int
using namespace std;
class Solution
{
public:
    int modified(string a)
    {
        int n = a.length();
        int res;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            count++;
            if (i == n - 1 || a[i] != a[i + 1])
            {
                if (count % 2 != 0)
                {
                    res = res + ((count - 1) / 2);
                    count = 0;
                }
                else if (count % 2 == 0)
                {
                    res = res + ((count / 2) - 1);
                    count = 0;
                }
            }
        }
        return res;
    }
};
int main()
{
    string a;
    cin >> a;
    Solution obj;
    cout << obj.modified(a) << endl;
    return 0;
}