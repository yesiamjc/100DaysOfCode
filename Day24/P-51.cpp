// binary to decimal conversition


#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int ans=0;
    int b = 1;
    while(n>0)
    {
       int y = n%10; // getting last digit
       ans += b*y;  // power of 2 + sum 
       b *= 2;  // power of 2
       n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<binaryToDecimal(n);
    return 0;
}