
// Reverse vowels in a given string



#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c)
{
    return (c == 'a' || c == 'A' || c == 'e' ||
            c == 'E' || c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' || c == 'u' ||
            c == 'U');
}
string reverseVowel(string str)
{
    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {
        if (!isVowel(str[i]))
        {
            i++;
            continue;
        }
        if (!isVowel(str[j]))
        {
            j--;
            continue;
        }
        swap(str[i], str[j]);

        i++;
        j--;
    }

    return str;
}
int main()
{

    string str;
    cin>>str;
    cout << reverseVowel(str);
    return 0;
}
