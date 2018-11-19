//4.27
#include <iostream>
using namespace std;
int main()
{
    int binary,a=1,decimal=0;
    cout<<"Enter a binary number:";
    cin>>binary;
    while(binary!=0)
    {
        decimal=decimal+binary%10*a;
        binary=binary/10;
        a=a*2;
    }
    cout<<"Decimal is  "<<decimal<<endl;
}
