// pythagorian triplet


#include <bits/stdc++.h>
using namespace std;
bool checkNum(int a,int b,int c)
{
     int x=max(a,max(b,c));
     int y,z;
     if(x==a)
     {
        y=b;
        z=c;
     }
     else if (x == b)
     {
       y=a;
       z=c;
     }
     else 
     {
       y=b;
       z=a;
     }
    if (a*a == b*b + c*c)
      return true;
    else 
      return false;
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(checkNum(x,y,z))
    {
      cout<<"it is a pythagorian triplet"<<endl;
    }
    else 
    {
      cout<<"it is not a pythagorian triplet !!!"<<endl;
    }
    return 0;
}