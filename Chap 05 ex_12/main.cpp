//triangle(a)
#include <iostream>
using namespace std;
int main()
{
   int a,b;
   for(a=1;a<=10;a++)
   {
    for(b=1;b<=a;b++)
    cout<<"*";
    cout<<endl;
   }
}
//triangle(b)
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    for(a=10;a>=1;a--)
    {
        for(b=1;b<=a;b++)
        cout<<"*";
        cout<<endl;
    }
}
//triangle(3)
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    for(a=10;a>=1;a--)
    {
        for(c=10;c>a;c--)
        cout<<" ";
        for(b=1;b<=a;b++)
        cout<<"*";
        cout<<endl;
    }
}
//triangle(4)
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    for(a=1;a<=10;a++)
    {
        for(c=10;c>a;c--)
        cout<<" ";
        for(b=1;b<=a;b++)
        cout<<"*";
        cout<<endl;
    }
}
