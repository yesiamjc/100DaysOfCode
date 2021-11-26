
// There are N buildings in Linear Land. They appear in a linear line one after the other and their heights 
// are given in the array arr[]. Geek wants to select three buildings in Linear Land and remodel them as 
// recreational spots. The third of the selected building must be taller than the first and shorter than the second.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool recreationalSpot(int arr[], int n)
    {
        if (n < 3)
            return false;
        int preMin[n];
        preMin[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            preMin[i] = min(preMin[i - 1], arr[i]);
        }
        stack<int> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > preMin[i])
            {
                while (!s.empty() && s.top() <= preMin[i])
                    s.pop();
                if (!s.empty() && s.top() < arr[i])
                    return true;
            }
            s.push(arr[i]);
        }
        return false;
    }
};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Solution ob;
    if (ob.recreationalSpot(arr, n))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}