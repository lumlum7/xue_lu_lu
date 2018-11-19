//4.16
#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0,d=0;
    while(a!=-1)
    {
        cout<<"Enter hours worked (-1 to end):";
        cin>>a;
        if(a==-1)
        {
            continue;
        }
        cout<<"Enter hourly rate of the employee($00.00): 10.00\n";
        if(a>40)
        {
            b=a*10;
            c=(a-40)*5;
            d=b+c;
        }
        else{d=a*10;}
        cout<<"Salary is $"<<d<<'\n'<<endl;
    }
}
