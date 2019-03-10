//Matrix.h
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>

class Matrix
{
public:
    Matrix();
    Matrix(int,int,double*);
    Matrix(const Matrix&);
    Matrix operator+(const Matrix&);
    Matrix operator-(const Matrix&);
    Matrix operator*(const Matrix&);
    Matrix operator/(Matrix&);
    friend std::ostream &operator<<(std::ostream&,const Matrix&);
    ~Matrix();
private:
    int row;
    int column;
    double* pt;
};
#endif // MATRIX_H

