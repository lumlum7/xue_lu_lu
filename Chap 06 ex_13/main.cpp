#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x,y;
    cout<<fixed;
    for(int a=1;a<=5;a++)
    {
        cout<<"Enter a number:";
        cin>>x;
        y=floor(x+0.5);
        cout<<"rounded is "<<setprecision(1)<<y<<endl;
    }
}
