//4.19
#include <iostream>
using namespace std;
int main()
{
    int counter=0;
    int number,largest,secondLargest;
    cout<<"Enter the first number:";
    cin>>largest;
    cout<<"Enter next number:";
    cin>>number;
    if(number>largest)
    {
        secondLargest=largest;
        largest=number;
    }
    else secondLargest=number;
    counter=2;
    while(counter<10)
    {
     cout<<"Enter next number:";
     cin>>number;

    if(number>largest)
    {
        secondLargest=largest;
        largest=number;
    }
    else if(number>secondLargest)
        secondLargest=number;
         counter++;
    }
    cout<<"\nLargest is"<<largest<<"\nSecond largest is"<<secondLargest<<endl;
}
