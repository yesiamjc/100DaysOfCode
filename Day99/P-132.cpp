
// Geek wants to inspect the quality of vegetables at each shop in the vegetable market. There are N different 
// vegetable sellers in a line. A single kilogram each of brinjal, carrot and tomato are available with every 
// seller but at different prices. Geek wants to buy exactly one vegetable from one shop and avoid buying the same 
// vegetables from adjacent shops. 
// Given the cost of each vegetable in each shop in a Nx3 matrix, calculate the minimum amount of money that 
// Geek must spend in the inspection. 

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minCost(int n, vector<int> cost[])
    {
        int minn = 0;
        int c1 = 0;
        int c2 = 0;
        int c3 = 0;
        int m1 = 0;
        int m2 = 0;
        int m3 = 0;
        int minn1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                m1 = cost[0][0];
                m2 = cost[0][1];
                m3 = cost[0][2];
                c1 = m1;
                c2 = m2;
                c3 = m3;
                minn1 = min(m1, min(m2, m3));
                if (n == 1)
                {
                    return minn1;
                }
            }
            else if (i >= 1)
            {
                int sum1 = min(c2, c3);
                int sum2 = min(c1, c3);
                int sum3 = min(c1, c2);
                c1 = cost[i][0] + sum1;
                c2 = cost[i][1] + sum2;
                c3 = cost[i][2] + sum3;
            }
        }
        minn = min(c1, min(c2, c3));
        return minn;
    }
};
int main()
{
    int N;
    cin >> N;
    vector<int> cost[N];
    int x, y, z;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y >> z;
        cost[i].push_back(x);
        cost[i].push_back(y);
        cost[i].push_back(z);
    }
    Solution ob;
    cout << ob.minCost(N, cost) << endl;
    return 0;
}