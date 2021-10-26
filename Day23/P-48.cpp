// pascal triangle
// LOGIC : we have to print iCj

#include <bits/stdc++.h>
using namespace std;
int getNum(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
          cout<<getNum(i)/(getNum(j)*getNum(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}