
//Wap in cpp to return minimum and maximum in an array

#include <iostream>
using namespace std;
int main()
{
    int max,min,n;
    int arr[n];
    cout<<"Enter array size : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max = arr[0];
    for(int i=1;i<n;i++)
    {
       if(max<arr[i])
       max =arr[i];
    }
    min = arr[0];
    for(int i=1;i<n;i++)
    {
      if (min>arr[i])
      min = arr[i];
    }
   cout<<endl<<"MAX is :"<<max<<endl<<"MIN is :"<<min<<endl;
   return 0;
}
