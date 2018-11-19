#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0;
    cout<<"Enter three number:";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a*a==b*b+c*c)
        cout<<"These can be a right triangle.";
    else if(b*b==a*a+c*c)
        cout<<"These can be a right triangle.";
    else if(c*c==a*a+b*b)
        cout<<"These can be a right triangle.";
    else
        cout<<"These can't be a right triangle.";
}

