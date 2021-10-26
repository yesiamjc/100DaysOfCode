// Sum of first n natural numbers 
// LOGIC : n*(n+1)/2

#include <bits/stdc++.h>
using namespace std;
int getSum(int n)
{
    int ans;
    ans =(n*(n+1))/2;
    return ans;
}
int onlySum(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
       ans +=i;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<getSum(n)<<endl;
    cout<<onlySum(n)<<endl;
    return 0;
}