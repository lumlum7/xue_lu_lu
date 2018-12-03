#include <iostream>

using namespace std;

int main()
{
    int side1,side2,hypotenuse,count;
    cout<<"side1\tside2\thypotenuse\n";
    for(side1=1;side1<=500;side1++)
    {
        for(side2=side1;side2<=500;side2++)
        {
            for(hypotenuse=side2;hypotenuse<=500;hypotenuse++)
            {
                if(side1*side1+side2*side2==hypotenuse*hypotenuse)
                    cout<<side1<<'\t'<<side2<<'\t'<<hypotenuse<<'\n';
                    count++;
            }
        }
    }
    cout<<"the number of right triangles is "<<count<<endl;
}
