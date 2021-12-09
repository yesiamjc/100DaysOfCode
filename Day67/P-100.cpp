
// Given an array of n elements, where each element is at most k away from its target position. 
// The task is to print array in sorted form.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void nearlySort(int a[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> minheap;
    for (int i = 0; i < n; i++)
    {
        minheap.push(a[i]);
        if (minheap.size() > k)
        {
            cout << minheap.top() << " ";
            minheap.pop();
        }
    }
    while (!minheap.empty())
    {
        cout << minheap.top() << " ";
        minheap.pop();
    }
    cout << "\n";
    return;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    nearlySort(a, n, k);
    return 0;
}