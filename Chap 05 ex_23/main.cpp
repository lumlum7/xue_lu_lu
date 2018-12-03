#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=5-a;b++)
        cout<<" ";
        for(c=1;c<=2*a-1;c++)
        cout<<"*";
        cout<<endl;
    }
    for(a=1;a<=4;a++)
    {
        for(b=1;b<=a;b++)
        cout<<" ";
        for(c=1;c<=9-2*a;c++)
        cout<<"*";
        cout<<endl;
    }
}
