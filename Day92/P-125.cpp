
// Design a data-structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), 
// isFull() and an additional operation getMin() which should return minimum element from the SpecialStack. 
// Your task is to complete all the functions, using stack data-Structure.

#include <bits/stdc++.h>
using namespace std;
void push(stack<int> &s, int a);
bool isFull(stack<int> &s, int n);
bool isEmpty(stack<int> &s);
int pop(stack<int> &s);
int getMin(stack<int> &s);
stack<int> s;
int main()
{
    int n, a;
    cin >> n;
    while (!isEmpty(s))
    {
        pop(s);
    }
    while (!isFull(s, n))
    {
        cin >> a;
        push(s, a);
    }
    cout << getMin(s) << endl;
}
stack<int> ss;
void push(stack<int> &s, int a)
{
    s.push(a);
    if (ss.size() == 0 || ss.top() >= a)
    {
        ss.push(a);
    }
}
bool isFull(stack<int> &s, int n)
{
    if (s.size() == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isEmpty(stack<int> &s)
{
    return (s.size() == 0);
}
int pop(stack<int> &s)
{
    if (s.size() == 0)
    {
        return -1;
    }
    int ans = s.top();
    s.pop();
    if (ss.top() == ans)
    {
        ss.pop();
    }
    return ans;
}
int getMin(stack<int> &s)
{
    if (ss.size() == 0)
    {
        return -1;
    }
    else
    {
        return ss.top();
    }
}
