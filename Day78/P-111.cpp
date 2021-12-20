
// Given an input stream of N integers. The task is to insert these numbers into a new stream and find the median of the stream formed by each insertion of X to the new stream.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    priority_queue<double> s;
    priority_queue<double, vector<double>, greater<double>> g;
    void insertHeap(int &x)
    {
        if (s.size() == 0 || s.top() > x)
        {
            s.push(x);
        }
        else
        {
            g.push(x);
        }
        balanceHeaps();
    }
    void balanceHeaps()
    {
        if (s.size() > g.size() + 1)
        {
            g.push(s.top());
            s.pop();
        }
        else if (g.size() > s.size())
        {
            s.push(g.top());
            g.pop();
        }
    }
    double getMedian()
    {
        double med;
        if (g.size() == s.size())
        {
            med = (s.top() + g.top()) / 2.0;
        }
        else
        {
            med = s.top();
        }
        return med;
    }
};
int main()
{
    int n, x;
    Solution ob;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        ob.insertHeap(x);
        cout << floor(ob.getMedian()) << endl;
    }
    return 0;
}