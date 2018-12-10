//a)
#include <iostream>
#include <array>
using namespace std;
const size_t rows=2;
const size_t columns=3;
void printArray(const array<array<int,columns>,rows>&);
//b)
2
//c)
3
//d)
6
//e)
array<array<int,columns>,1>t1={1,2,3};
//f)
array<array<int,2>,rows>t2={2,5};
//g)
t[1][2]=0;
//h)
t[1][1]=0;
t[1][2]=0;
t[1][3]=0;
t[2][1]=0;
t[2][2]=0;
t[2][3]=0;
//i)
for(size_t row=1;row<=t.size();++row)
{
    for(size_t column=1;column<=t[row].size();++column)
        t[row][column]=0;
    cout<<t[row][column]<<endl;
}
//j)
for(size_t column=1;column<=3;++column)
{
    for(size_t row=1;row<=2;++row)
        t[row][column]=0;
}
//k)
cin>>t[row][column];
//m)
for(size_t column=1;column<=3;++column)
{
    cout<<t[1][column]<<endl;
}
//n)
int total=0;
for(size_t row=1;row<=2;++row)
{
    total+=t[row][2];
}
//o)
for(auto const &row:t)
{
    for(auto const &element:row)
        cout<<element<<' ';
    cout<<endl;
}















