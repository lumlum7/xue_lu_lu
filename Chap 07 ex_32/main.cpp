#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
const int maxrange=1000;
int recursiveMinimum(const int ,int,int);

int main()
{
    const int size=10;
    int array[size];
    int smallest;
    srand(time(0));
    for(int loop=0;loop<=size;loop++)
    array[loop]=1+rand()%maxrange;
    cout<<"Array members are:\n";
    for(int i=0;i<size;i++)
    cout<<setw(5)<<array[i];
    cout<<endl;
}
