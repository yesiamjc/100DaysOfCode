// Factorial of n


#include <bits/stdc++.h>
using namespace std;
int getFactorial(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
       fact = fact*i;
    }
    return fact;
}
int main()
{
    int n;
    cin>>n;
    int ans = getFactorial(n);
    cout<<ans;
    return 0;
}