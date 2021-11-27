
// Two friends, A and B, are playing the game of matchsticks. In this game, a group of 
// N matchsticks is placed on the table. The players can pick any number of matchsticks 
// from 1 to 4 (both inclusive) during their chance. The player who takes the last match 
// stick wins the game. If A starts first, how many matchsticks should he pick such that he 
// is guaranteed to win the game or determine if it's impossible for him to win.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int matchGame(long long N)
    {
        if (N % 5 == 0)
            return -1;
        return N % 5;
    }
};
int main()
{
    long long N;
    cin >> N;
    Solution ob;
    cout << ob.matchGame(N) << endl;
    return 0;
}