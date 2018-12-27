#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

const int race=70;
void moveTortoise(int *const);
void moveHare(int *const);
int main()
{
    int tortoise=1;
    int hare=1;
    int timer=0;
    srand(time(0));
    cout<<"BANG !!!!!\n";
    cout<<"AND THEY'RE OFF !!!!!\n";
    while(tortoise!=race&&hare!=race)
    {
        moveTortoise(&tortoise);
        moveHare(&hare);
        timer++;
    }
    if(tortoise>=hare)
        cout<<"TORTOISE WINS!!!YAY!!!\n";
    else
        cout<<"HARE wins.Yuch.\n";
}
void moveTortoise(int *const tPtr)
{
    int a=1+rand()%10;
    if(a>=1&&a<=5)
        *tPtr+=3;
    else if (a==6||a==7)
        *tPtr-=6;
    else
        ++(*tPtr);
    if(*tPtr<1)
        *tPtr=1;
    else if(*tPtr>race)
        *tPtr=race;
}
void moveHare(int *const hPtr)
{
    int b=1+rand()%10;
    if(b==3||b==4)
        *hPtr+=9;
    else if (b==5)
        *hPtr-=12;
    else if(b>=6&&b<=8)
        ++(*hPtr);
    else if(b>8)
        *hPtr-=2;
    if(*hPtr<1)
        *hPtr=1;
    else if(*hPtr>race)
        *hPtr=race;
}
