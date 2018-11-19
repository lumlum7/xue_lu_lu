#include <iostream>
using namespace std;
int main()
{
int a,b,c,d;
int number=0;
cout<<"Enter a number:";
cin>>number;
a=number/10000;
b=number%10000/1000;
c=number%10000%1000%100/10;
d=number%10000%1000%100%10;
    if(a==d)
    {
    if(b==c)
            cout<<number<<" is a palindrome."<<endl;
    else
        cout<<number<<" is not a palindrome."<<endl;
    }
    else
        cout<<number<<" is not a palindrome."<<endl;
}
