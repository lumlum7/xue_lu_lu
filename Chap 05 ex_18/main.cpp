#include <iostream>

using namespace std;

int main()
{
   int number,factor;
   cout<<"Dec\tBinary\t\tOct\tHex\n";
   for(int loop=1;loop<=256;loop++)
   {
       cout<<dec<<loop<<"\t";
       number=loop;
       factor=256;
       cout<<(number==256?'1':'0');
       do
       {
           cout<<(number<factor&&number>=(factor/2?'1':'0'));
           factor/=2;
           number%=factor;
       }
       while(factor>1);
       cout<<'\t'<<oct<<loop;
       cout<<'\t'<<hex<<loop<<endl;
   }
}
