
// Given a Queue Q containing N elements. The task is to reverse the Queue. Your task is to complete 
// the function rev(), that reverses the N elements of the queue.

#include <bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    queue<int> q;
    int n, var;
    cin >> n;
    while (n--)
    {
        cin >> var;
        q.push(var);
    }
    queue<int> a = rev(q);
    while (!a.empty())
    {
        cout << a.front() << " ";
        a.pop();
    }
    cout << endl;
}
queue<int> rev(queue<int> q)
{
    vector<int> v;
    while (q.empty() != true)
    {
        v.push_back(q.front());
        q.pop();
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        q.push(v[i]);
    return q;
}