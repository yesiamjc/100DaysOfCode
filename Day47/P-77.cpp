
// The RPS world championship is here. Here two players A and B play the game.You need to determine who wins.
// Both players can choose moves from the set {R,P,S}.
// The game is a draw if both players choose the same item.
// The winning rules of RPS are given below:
// Rock crushes scissor
// Scissor cuts paper
// Paper envelops rock

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string gameResult(string s)
    {
        if (s[0] == s[1])
            return "DRAW";
        else if (s[0] == 'R' && s[1] == 'S')
            return "A Won";
        else if (s[0] == 'S' && s[1] == 'P')
            return "A Won";
        else if (s[0] == 'P' && s[1] == 'R')
            return "A Won";
        else
            return "B Won";
    }
};
int main()
{
    string s;
    cin >> s;
    Solution ob;
    cout << ob.gameResult(s) << endl;
}