#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int size=1000;
    int array[size];
    int count=0;
    for(int a=0;a<size;a++)
    array[a]=1;
    for(int i=1;i<size;i++)
    {
        if(array[i]==1&&i!=1)
            {
                for(int j=i;j<size;j++)
                {
                    if(j%i==0&&j!=i)
                        array[j]=0;
                }
            }
    }
    for(int b=2;b<size;b++)
    {
        if(array[b]==1)
        {
            cout<<setw(3)<<b<<" is a prime number.\n";
            count++;
        }
    }
    cout<<"A total of "<<count<<" prime numbers were found."<<endl;

}
