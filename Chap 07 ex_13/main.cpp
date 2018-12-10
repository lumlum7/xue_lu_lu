#include <iostream>

using namespace std;

int main()
{
    const int size=20;
    int a[size]={};
    int b=0,c,value;
    cout<<"Enter 20 numbers(10-100):\n";
    for(int i=0;i<size;++i)
    {
        c=0;
        cin>>value;
    if(value>=10&&value<=100)
    {
        for(int j=0;j<b;j++)
        {
            if(value==a[j])
            {
                c=1;
                break;
            }
        }
        if(!c)
        {
            a[b++]=value;
        }
        else
        cout<<"Same number.\n";
    }
    else
        cout<<"Invalid number.\n";
    }
    cout<<"\nThe values are:\n";
    for(int i=0;i<size;i++)
        cout<<a[i]<<' ';
        cout<<endl;
}

