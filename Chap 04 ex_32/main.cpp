#include <iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter three number:";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b>c&&b+c>a&&a+c>b)
        cout<<"These can be a triangle.";
    else
    cout<<"These can't be a triangle.";
}
