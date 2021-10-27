// Hexadecimal to Decimal 


#include <bits/stdc++.h>
using namespace std;
int hexaToDeci(string n)
{
    int ans=0;
    int b=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            ans += b*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<= 'F')
        {
            ans += b*(n[i]-'A'+10);
        }
        b*=16;
    }
    return ans;
}
int main()
{
    string n;
    cin>>n;
    cout<<hexaToDeci(n);
}