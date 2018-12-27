//Fig. 9.4:Time.h
#ifndef TIME_H
#define TIME_H
class Time
{
public:
    Time();
    void setTime(int,int,int);
    void printUniversal()const;
    void printStandard()const;
private:
    int hour;
    int minute;
    int second;
};
#endif // TIME_H
//Fig.9.4:Time.cpp
#include <iostream>
#include <iomanip>
#include <ctime>
#include "Time.h"
using namespace std;
Time::Time()
{
    const time_t currentTime=time(0);
    const *localTime=localTime(&currentTime);
    setTime(localTime->tm_hour,localTime->tm_min,localTime->tm_sec);
}
void Time::setTime(int h,int m,int s)
{
    hour=(h>0&&h<24)?h:0;
    minute=(m>=0&&m<60)?m:0;
    second=(s>=0&&s<60)?s:0;
}
void Time::printUniversal()
{
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second;
}
void Time::printStandard()
{
    cout<<((hour==0||hour==12)?12:hour%12)<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setw(2)<<secomd<<(hour<12?"AM":"PM");
}
//ex_9.4.cpp
#include <iostream>
#include "Time.h"
using namespace std;
int main()
{
    Time a;
    cout<<"The universal time is\n ";
    a.printUniversal();
    cout<<"The standard time is ";
    a.printStandard();
    cout<<'\n';
}







