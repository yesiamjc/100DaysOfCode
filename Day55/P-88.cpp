
// Given an integer N the task is to find the largest number which is smaller or equal to it and 
// has its digits in non-decreasing order.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int find(int N)
    {
        for (int i = N; i >= 0; i--)
        {
            int m = INT_MAX;
            bool f = 0;
            int k = i;
            while (k)
            {
                if (k % 10 <= m)
                {
                    f = 1;
                    m = k % 10;
                }
                else
                {
                    f = 0;
                    break;
                }
                k = k / 10;
            }
            if (f)
                return i;
        }
    }
};
int main()
{
    int N;
    cin >> N;
    Solution ob;
    cout << ob.find(N) << endl;
    return 0;
}