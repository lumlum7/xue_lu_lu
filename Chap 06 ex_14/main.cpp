#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double roundTolnteger(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);

int main()
{
    int a;
    double number;
    cout<<"Enter numbers you want to process:"<<fixed;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cout<<"\nEnter number:";
        cin>>number;
        cout<<setprecision(5)<<number<<"rounded to the nearest integer is "<<setprecision(0)<<roundTolnteger(number)<<'\n';
        cout<<setprecision(5)<<number<<"rounded to the nearest tenth is "<<setprecision(1)<<roundToTenths(number)<<'\n';
        cout<<setprecision(5)<<number<<"rounded to the nearest hundredth is "<<setprecision(2)<<roundToHundredths(number)<<'\n';
        cout<<setprecision(5)<<number<<"rounded to the nearest thousandth is "<<setprecision(3)<<roundToThousandths(number)<<'\n';
    }
}
double roundTolnteger(double x)
{
    return floor(x+0.5);
}
double roundToTenths(double x)
{
    return floor(x*10+0.5)/10;
}
double roundToHundredths(double x)
{
    return floor(x*100+0.5)/100;
}
double roundToThousandths(double x)
{
    return floor(x*1000+0.5)/1000;
}
