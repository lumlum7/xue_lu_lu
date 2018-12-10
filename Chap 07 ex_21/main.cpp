#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int people=5;
    const int products=6;
    double sales[people][products]={0.0};
    double value,totalSales;
    double productSales[products]={0.0};
    int salesPerson,product;
    cout<<"Enter the salesperson(1-4),product number(1-5),and"
    <<" total sales.\nEnter -1 for the salesperson to end input.\n";
    cin>>salesPerson;
    while(salesPerson!=-1)
    {
        cin>>product>>value;
        sales[salesPerson][product]+=value;
        cin>>salesPerson;
    }
    cout<<"\nThe total sales for each salesperson are displayed at the end of each row,\n"
    <<"and the total sales for each product are displayed at the bottom of each column.\n"<<setw(12)
    <<1<<setw(12)<<2<<setw(12)<<3<<setw(12)<<4<<setw(12)<<5<<setw(13)<<"Total\n";
    for(int i=1;i<people;i++)
    {
        totalSales=0.0;
        cout<<i;
        for(int j=1;j<products;j++)
        {
            totalSales+=sales[i][j];
            cout<<setw(12)<<setprecision(2)<<sales[i][j];
            productSales[j]+=sales[i][j];
        }
        cout<<setw(12)<<setprecision(2)<<totalSales<<'\n';
    }
    cout<<"\nTotal"<<setw(8)<<setprecision(2)<<productSales[1];
    for(int j=2;j<products;j++)
        cout<<setw(12)<<setprecision(2)<<productSales[j];
        cout<<endl;
}
