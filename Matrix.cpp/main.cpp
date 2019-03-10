//Matrix.cpp
#include <iostream>
#include "Matrix.h"
using namespace std;

Matrix::Matrix()
{
    row=0;
    column=0;
    pt=NULL;
}
Matrix::Matrix(int r,int c,double* p)
 {
     pt=new double[r*c];
     for(int i=0;i<r*c;i++)
        pt[i]=p[i];
 }
 Matrix::Matrix(const Matrix& m)
 {
     row=m.row;
     column= m.column;
     pt=new double[row*column];
     for(int i=0;i<row*column;i++)
        pt[i]=m.pt[i];
 }
 Matrix Matrix::operator+(const Matrix& m)
 {
     if(row!=m.row||column!=m.column)exit(0);
     Matrix temp;
     temp.pt=new double[row*column];
     temp.row=row;
     temp.column=column;
     for(int i=0;i<row*column;i++)
        temp.pt[i]=pt[i]+m.pt[i];
     return temp;
 }
 Matrix Matrix::operator-(const Matrix& m)
 {
     if(row!=m.row||column!=m.column)exit(0);
     Matrix temp;
     temp.pt=new double[row*column];
     temp.row=row;
     temp.column=column;
     for(int i=0;i<row*column;i++)
        temp.pt[i]=pt[i]-m.pt[i];
     return temp;
 }
  Matrix Matrix::operator*(const Matrix& m)
  {
      if(column!=m.row)exit(0);
      Matrix temp;
      temp.pt=new double[row*m.column];
      temp.row=row;
      temp.column=m.column;
      memset(temp.pt,0,sizeof(double)*row*m.column);
      temp.pt[0]=0;
      int k,count,temp1;
      k=count=temp1=0;
      for(int i=0;i<row;i++)
      {
          while(k<m.column)
          {
              for(intj=i*column;j<(i+1)*column;j++)
             {
                 temp.pt[count]+=pt[j]*m.pt[temp1];
                 temp1+=m.column;
             }
             k++;
             temp1=k;
             count++;
          }
          temp1=0;
          k=0;
      }
      return temp;
}
Matrix Matrix::operator/(Matrix& m)
{
    return(*this)*m.Inverse();
}
ostream& operator<<(ostream&,const Matrix& m)
Matrix::~Matrix()
{
    cout<<"~Matrix"<<endl;
    if(pt!=NULL)
    {
        delete[]pt;
        pt=NULL;
    }
}

















