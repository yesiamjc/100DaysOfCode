// Fibenacci series


#include <bits/stdc++.h>
using namespace std;
void getFibenacci(int n)
{
    int N,T1=0,T2=1;
    for(int i=1;i<=n;i++)
    {
       cout<<T1<<",";
       N=T1+T2;
       T1=T2;
       T2=N;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    getFibenacci(n);
    return 0;
}