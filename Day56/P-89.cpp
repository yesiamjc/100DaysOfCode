

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main()
{
    int n, k;
    cin >> n >> k;
    queue<int> q;
    while (n-- > 0)
    {
        int a;
        cin >> a;
        q.push(a);
    }
    queue<int> ans = modifyQueue(q, k);
    while (!ans.empty())
    {
        int a = ans.front();
        ans.pop();
        cout << a << " ";
    }
    cout << endl;
}
queue<int> modifyQueue(queue<int> q, int k)
{
    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        v.push_back(q.front());
        q.pop();
    }
    reverse(v.begin(), v.end());
    while (q.size() != 0)
    {
        v.push_back(q.front());
        q.pop();
    }
    for (int i = 0; i < v.size(); i++)
    {
        q.push(v[i]);
    }
    return q;
}