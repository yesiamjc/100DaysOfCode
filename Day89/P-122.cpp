
// In the given range [L, R], print all numbers having unique digits. e.g. In range 10 to 20 should print all 
// numbers except 11.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> uniqueNumbers(int L, int R)
    {
        vector<int> r;
        while (L <= R)
        {
            string s = to_string(L);
            set<int> unitdigit(s.begin(), s.end());
            if (s.size() == unitdigit.size())
                r.push_back(L);
            L++;
        }
        return r;
    }
};
int main()
{
    int l, r;
    cin >> l >> r;
    Solution ob;
    vector<int> numbers = ob.uniqueNumbers(l, r);
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}