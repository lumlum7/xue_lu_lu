#include <iostream>

using namespace std;

int main()
{
   int number,sum=0,a=0;
   cout<<"Enter numbers you want to be summed:";
   cin>>a;
   for(int i=1;i<=a;i++)
   {
      cin>>number;
      sum+=number;
   }
   cout<<"Sum is "<<sum<<endl;
}
