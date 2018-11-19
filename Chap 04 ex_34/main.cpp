//a)
#include <iostream>
using namespace std;
int main()
{
    int number,a=1;
    cout<<"Enter a number:";
    cin>>number;
    cout<<number<<"! is ";
    while(number>0)
    {
        a*=number;
        number--;
    }
    cout<<a<<endl;
}
//b)
#include <iostream>
using namespace std;
int main()
{   int number=1,accuracy,a=1;
    double e=1;
    cout<<"Please enter a accuracy:";
    cin>>accuracy;
    while(number<accuracy)
    {
        a*=number;
        e+=1.0/a;
        number++;
    }
    cout<<"e is "<<e<<endl;
}
