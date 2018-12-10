#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
//a)
int main()
    array<string,6> alphabet;
    cout<<"alphabet[6]=";
    cin>>alphabet[6];
}
//b)
int main()
{
    array<float,4>grades;
    cout<<"grades[4]=";
    cin>>grades[4];
}
//c)
int main{()
{
    array<int,5>values={8,8,8,8,8}
}
//d)
int main()
{
    const size_t arraySize=100;
    array<int,arraySize>temperatures={1,2,3,4,5,6,7,8,9,10};
    int total=0;
    for(size_t i=0;i<temperatures.size();++i)
     total+=temperatures[i];
     cout<<"Total of array:"<<total<<endl;
}
