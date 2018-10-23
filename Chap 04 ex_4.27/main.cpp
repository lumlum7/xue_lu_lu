//4.27(1)
#include<iostream>
using namespace std;
int main()
{
    int i=0,a=1,b=1;
    cout<<"Please enter a binary number:";
    cin>>a;
    for(a;a>o;a)
    {
        i=(a%10)*b+i;
        a=a/10;
        b=b*2;
    }
    cout<<i<<endl;
    return 0;
}
//4.27(2)
#include <iostream>
using namespace std;
int main(void)
{
    int n,i,j=0;
    int a[1000];
    cout<<"Please enter a number:";
    cin>>n;
    i=n;
    while(i)
    {
        a[j]=i%2;
        i/=2;
        j++;
    }
    for(i=j-1;i>=0;i--)
    cout<<a[i];
    cout<<endl;
}
