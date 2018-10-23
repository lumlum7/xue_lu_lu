//4.15
#include <iostream>
using namespace std;
int main()
{
    double salary,sales,base_salary;
    base_salary=200;
    while(sales!= -1)
    {
        cout<<"Enter sales in dollars(-1 to end):";
        cin>>sales;
        if(sales== -1)continue;
        salary=base_salary+sales*0.09;
        cout<<"Salary is:$"<<salary<<endl;
    }
    return 0;
}
