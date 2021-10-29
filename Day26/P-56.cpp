//  Decimal To Hexadecimal


#include <bits/stdc++.h>
using namespace std;
string decimalTOHexadecimal(int n)
{
  int x=1;
  string ans = "";
  while(x<=n)
   x *=16;
  x/=16;
  while(x>0)
  {
    int lastDigit=n/x;
    n -= lastDigit*x;
    x/=16;
    if(lastDigit<=9)
     ans += to_string(lastDigit);
    else
    {
      char c = 'A' + lastDigit -10;
      ans.push_back(c);
    }
  }
  return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimalTOHexadecimal(n);
    return 0;
}