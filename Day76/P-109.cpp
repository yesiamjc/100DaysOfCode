
// N people standing in the queue of a movie ticket counter. It is a weird counter, distributes tickets to first K people and then last K people and again first K people and so on. The task is to find the last person to get the ticket.


#include <bits/stdc++.h>
using namespace std;
int helper(int n, int k)
{
    int start = 1, end = n;
    bool front = true;
    while (end - start + 1 > k)
    {
        if (end - start + 1 > k)
        {
            start += k;
            front = false;
        }
        else
        {
            break;
        }
        if (end - start + 1 > k)
        {
            end -= k;
            front = true;
        }
        else
        {
            break;
        }
    }
    return front ? end : start;
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout << helper(n, k) << endl;
    return 0;
}