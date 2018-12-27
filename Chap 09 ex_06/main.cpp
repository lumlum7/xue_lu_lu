#ifndef RATIONAL_H
#define RATIONAL_H
class Rational
{
public:
    Rational(int =0,int =1);
    RationalAddition(const Rational &);
    RationalSubtraction(const Rational &);
    RationalMultiplication(const Rational &);
    RationalDivision(const Rational &);
    void printRational();
    void printRationalDouble();
private:
    int numerator;
    int denominator;
};
#endif // RATIONAL_H
