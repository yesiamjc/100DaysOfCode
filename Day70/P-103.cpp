
// Geek lives in a special city where houses are arranged in a hierarchial manner. Starting from house number 1, each house leads to two more houses.  
// 1 leads to 2 and 3. 
// 2 leads to 4 and 5. 
// 3 leads to 6 and 7. and so on. 
// Given the house numbers on two houses x and y, find the length of the shortest path between them. 

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int shortestPath(int x, int y)
    {
        int r = 0;
        while (x != y)
        {
            if (x > y)
                x /= 2;
            else
                y /= 2;
            r++;
        }
        return r;
    }
};
int main()
{
    int x, y;
    cin >> x >> y;
    Solution ob;
    cout << ob.shortestPath(x, y) << endl;
    return 0;
}