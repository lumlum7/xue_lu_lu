//4.17
#include <iostream>
using namespace std;
int main()
{
    int counter=0,number=0,largest=0;
    while(counter<10)
    {
        cout<<"Enter a number:";
        cin>>number;
        if(largest<number)
        {
            largest=number;
        }
      counter=counter+1;
      cout<<"The largest number is  "<<largest<<endl;
    }
    return 0;
}
