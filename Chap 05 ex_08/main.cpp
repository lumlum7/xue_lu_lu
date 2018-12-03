#include <iostream>

using namespace std;

int main()
{
    int counter, number,smallest;
    cout<<"Enter integers:";
    cin>>counter;
    for(int i=1;i<=counter;i++)
    {
        cin>>number;
        if(number<smallest)
        {
            smallest=number;
        }
    }
    cout<<"The smallest is "<<smallest<<endl;
}
