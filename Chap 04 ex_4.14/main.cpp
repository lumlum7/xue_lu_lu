//4.14
#include <iostream>
using namespace std;

int main()
{
 int account;
 double beginning_balance;
 double charges;
 double credits;
 double limit;
 double new_balance;
 while(account!= -1)
 {cout<<"Enter account number(or-1 to quit):";
 cin>>account;
 if(account== -1)continue;
 cout<<"Enter beginning balance:";
 cin>>beginning_balance;
 cout<<"Enter total charges:";
 cin>>charges;
 cout<<"Enter total credits:";
 cin>>credits;
 cout<<"Enter credit limit:";
 cin>>limit;
 new_balance=beginning_balance+charges-credits;
if(new_balance>limit)
    {
         cout<<"New balance is "<<new_balance<<endl;
         cout<<"Account:"<<account<<endl;
         cout<<"Credit limit:"<<limit<<endl;
         cout<<"Balance:"<<new_balance<<endl;
         cout<<"Credit Limit Exceeded."<<endl;
     }
cout<<"New balance is"<<new_balance<<endl;
 }
return 0;
 }
