//4.20
#include <iostream>
using namespace std;
int main()
{
    unsigned int passes=0,failures=0,studentCounter=1,result;
    while(studentCounter<=10)
    {
        cout<<"Enter result (1=pass,2=fail):";
        cin>>result;
        if(result==1)
          {
            passes=passes+1;
            studentCounter=studentCounter+1;
          }
        else if(result==2)
          {
            failures=failures+1;
            studentCounter=studentCounter+1;
          }
          else {cout<<"Invalid input"<<endl;}
        }
        cout<<"Passed"<<passes<<"\nFailed"<<failures<<endl;
        if(passes>8)
        {
        cout<<"Bonus to instructor!"<<endl;
        }
}
