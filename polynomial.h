#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>

class Polynomial
{
    friend std::istream &operator>>(std::istream &,Polynomal &);
    friend std::ostream &operator<<(std::ostream &,const Polynomal &);
public:
    static const int maxTerms=100;
    Polynomal operator+(const Polynomal &)const;
    Polynomal operator-(const Polynomal &)const;
    Polynomal operator*(const Polynomal &)const;
    Polynomal &operator=(const Polynomal &);
    Polynomal &operator+=(const Polynomal &);
    Polynomal &operator-=(const Polynomal &);
    Polynomal &operator*=(const Polynomal &);
    ~Polynomal();
    void enterTerms();
    void printPolynomal()const;
    int getNumberOfTerms()const;
    int getTermCofficient(int)const;
    int getTermExponent(int)const;
private:
    int numberOfTerms;
    int cofficients[maxTerms];
    int exponents[maxTerms];
    static void polynomialCombine(Polynomial &);

};
#endif // POLYNOMIAL
