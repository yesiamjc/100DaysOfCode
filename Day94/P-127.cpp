
// You are given an array arr of size N. You need to push the elements of the array into a stack and then
// print them while popping.

#include <bits/stdc++.h>
using namespace std;
stack<int> _push(int arr[], int n);
void _pop(stack<int> s);
stack<int> _push(int arr[], int n)
{
    stack<int> s;
    for (auto i = 0; i < n; i++)
        s.push(arr[i]);
    return s;
}
void _pop(stack<int> s)
{
    while (!s.empty())
        cout << s.top() << " ", s.pop();
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    stack<int> mys = _push(arr, n);
    _pop(mys);
    cout << endl;
    return 0;
}