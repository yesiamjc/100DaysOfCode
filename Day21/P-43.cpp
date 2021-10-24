// Armstrong Number


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int a=n;
    while(n>0)
    {
        int digit = n%10;
        sum += pow(digit,3);
        n=n/10;
    }
    if (sum==a)
    {
     cout<<"The entered number is an Armstrong Number."<<endl;
    }
    else
    {
     cout<<"The entered number is not an Armstrong Number !!!"<<endl;
    }
    return 0;
}