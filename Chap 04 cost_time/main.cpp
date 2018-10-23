//not in book
#include <iostream>
using namespace std;
int main()
{
    int year,month,date,hour,minute,seconds;
    cout<<"please enter year:";
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
                leap=true;
            else  leap=false;
        }
        else leap=true;
    }
    else leap=false;
    if(leap)
        cout<<year<<"is";
    else
        cout<<year<<"is not";
    cout<<"a leap year."<<endl;
    cout<<"please enter a month:";
    cin>>month;
    cout<<"please enter a date:";
    cin>>date;
    cout<<"please enter hour and minute and seconds:"
    cin>>hour>>minute>>seconds;
    return 0;
}
