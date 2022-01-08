
// You are given an array A of size N. you need to insert the elements of A into a multimap(element as key and 
// index as value) and display the results. Also, you need to erase a given element x from the multimap and print 
// "erased x" if successfully erased, else print "not found".

#include <bits/stdc++.h>
using namespace std;
multimap<int, int> multimapInsert(int arr[], int n);
void multimapDisplay(multimap<int, int> mp);
void multimapErase(multimap<int, int> &mp, int x);
multimap<int, int> multimapInsert(int arr[], int n)
{
    multimap<int, int> mp;
    for (auto i = 0; i < n; i++)
    {
        mp.insert(make_pair(arr[i], i));
    }
    return mp;
}
void multimapDisplay(multimap<int, int> mp)
{
    for (auto i : mp)
        cout << i.first << " " << i.second << endl;
}
void multimapErase(multimap<int, int> &mp, int x)
{
    if (mp.find(x) != mp.end())
    {
        cout << "erased " << x;
        mp.erase(x);
    }
    else
        cout << "not found";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    multimap<int, int> mp = multimapInsert(arr, n);
    multimapDisplay(mp);
    int x;
    cin >> x;
    multimapErase(mp, x);
    multimapDisplay(mp);
    return 0;
}