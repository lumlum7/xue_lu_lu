#include <iostream>
using namespace std;
int integerPower(int,int);
int main()
{
   int base,exponent;
   cout<<"Enter base and exponent:";
   cin>>base;
   cin>>exponent;
   cout<<base<<" to the power "<<exponent<<" is "<<integerPower(base,exponent)<<endl;
}
int integerPower(int b,int e)
{
    int a=1;
    for(int i=1;i<=e;i++)
        a=a*b;
    return a;
}
