
// Given two integer arrays Arr1 and Arr2 of size N. Use the greatest elements from the given arrays to 
// create a new array of size N such that it consists of only unique elements and the sum of all its elements 
// is maximum.

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> maximizeArray(int arr1[], int arr2[], int n)
    {
        vector<int> v, ans;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(arr2[i]);
            s.insert(arr1[i]);
        }
        while (s.size() > n)
        {
            s.erase(*s.begin());
        }
        for (int i = 0; i < n; i++)
        {
            auto it = s.find(arr2[i]);
            if (it != s.end())
            {
                ans.push_back(arr2[i]);
                s.erase(arr2[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            auto it = s.find(arr1[i]);
            if (it != s.end())
            {
                ans.push_back(arr1[i]);
                s.erase(arr1[i]);
            }
        }
        return ans;
    }
};
int main()
{
    int n, i;
    cin >> n;
    int arr1[n], arr2[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    Solution ob;
    auto ans = ob.maximizeArray(arr1, arr2, n);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}