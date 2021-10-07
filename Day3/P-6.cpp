// Sum of numbers in string 

#include <iostream>
using namespace std;
class Solution{
 public:
  int findSum(string str)
  {
   int num=0;
   int sum=0;
   for(int i=0;i<str.length();i++)
   {
    if(str[i]>='0' && str[i]<='9')
    {
     num=num*10+(str[i]-'0');
    }
    else
    {
     sum=sum+num;
     num =0;
    }
   }
   return sum+num;
  }
};
int main()
{
    string str;
	cin>>str;
	Solution obj;
	cout << obj.findSum(str);
    cout<<endl;
	return 0;
}
