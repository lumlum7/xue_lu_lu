#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int terms,i=1;
    double approximateValue=0;
    cout<<"terms\t\tapproximate value\n";
    for(terms=1;terms<=1000;terms++)
    {
        approximateValue+=pow (-4,i-1)/(i*2-1);
        i++;
        cout<<terms<<'\t'<<approximateValue<<endl;
    }
}
