//4.13
#include <iostream>
using namespace std;
int main()
{  double a=0,b=0,c=0,d=0,f=0,g=0;
    while(a!=-1)
{
    cout<<"Enter miles driven (-1 to quit):";
    cin>>a;
    if(a==-1)
    {
        continue;
    }
    cout<<"Enter gallons used:";
    cin>>b;
    c=a/b;
    cout<<"MPG this trip:"<<c<<endl;
    f=f+a;
    g=g+b;
    d=f/g;
    cout<<"Total MPG:"<<d<<endl;
    }
    return 0;
}
