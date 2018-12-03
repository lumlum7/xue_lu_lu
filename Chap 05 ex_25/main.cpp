#include <iostream>

using namespace std;

int main()
{
    int count;
    bool a=false;
    for(count=1;(count<=10)&&(!a);count++)
    {
        if(count==5)
            a=true;
        else
            cout<<count<<" ";
    }
    cout<<"\nBroke out of loop because loop continuation test "<<"(!a) failed."<<endl;
}
