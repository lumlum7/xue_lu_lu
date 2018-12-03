#include <iostream>

using namespace std;

int main()
{
   int a,b,c,d;
   cout<<"Please enter a number:";
   cin>>d;
   for(a=1;a<=(d+1)/2;a++)
   {
       for(b=1;b<=(d+1)/2-a;b++)
       cout<<" ";
       for(c=1;c<=2*a-1;c++)
       cout<<"*";
       cout<<endl;
   }
   for(a=1;a<=(d+1)/2-1;a++)
   {
       for(b=1;b<=a;b++)
        cout<<" ";
       for(c=1;c<=d-2*a;c++)
        cout<<"*";
        cout<<endl;
   }
}
