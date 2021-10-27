// Octal to decimal


#include <bits/stdc++.h>
using namespace std;
int octalToDecimal(int n)
{
   int ans=0;
   int b=1;
   while(n>0)
   {
       int y = n%10;
       ans+=b*y;
       b*=8;
       n=n/10;
   }
   return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<octalToDecimal(n);
    return 0;
}