//4.18
#include <iostream>
using namespace std;
int main()
{   int N=0,a=0,b=0,c=0;
    cout<<"N\t10*N\t100*N\t1000*N\n"<<endl;
    N=1;
    while(N<=5)
    {
        a=10*N;
        b=100*N;
        c=1000*N;
        cout<<N<<'\t'<<a<<'\t'<<b<<'\t'<<c<<endl;
        N=N+1;
    }
    return 0;
}
