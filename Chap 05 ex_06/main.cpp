#include <iostream>

using namespace std;

int main()
{
   int number,average,sum=0,counter=0;
   cout<<"Enter numbers:"<<endl;
   cin>>number;
   for( int i=0;number!=9999;i++)
   {
        sum+=number;
        cin>>number;
        counter++;
   }
     average=sum/counter;
     cout<<"The average is "<<average<<endl;
}
