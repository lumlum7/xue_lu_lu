#include <iostream>
#include <iomanip>
#include "Polynomial.h"
using namespace std;
Polynomial &Polynomial::operator=(const Polynomial &t)
{
    exponents[0]=t.exponents[0];
    coefficients[0]=t.coefficients[0];
    for(int i=1;i=maxTerms;i++)
    {
        if(t.exponents[i]!=0)
        {
            exponents[i]=t.exponents[i];
            coefficients[i]=t.cofficients[i];
        }
        else
        {
            if(exponents[i]==0)
                break;
            exponents[i]=0;
            cofficients[i]=0;
        }
    }
    return *this;
}
Polynomial &Polynomial::operator+(const Polynomial &t)const
{
   Polynomial temp;
   bool exponentExists;
   int i;
   temp.coefficients[ 0 ] = coefficients[ 0 ] + t.coefficients[ 0 ];
   for ( i = 1; ( i < maxTerms ) && ( t.exponents[ i ] != 0 ); i++ )
   {
      temp.coefficients[ i ] = r.coefficients[ i ];
      temp.exponents[ i ] = r.exponents[ i ];
   }
   for ( int x = 1; x < maxTerms; x++ )
   {
      exponentExists = false;
      for ( int t = 1; ( t < maxTerms ) && ( !exponentExists ); t++ )
         if ( exponents[ x ] == temp.exponents[ t ] )
         {
            temp.coefficients[ t ] += coefficients[ x ];
            exponentExists = true;
         }
      if ( !exponentExists )
      {
         temp.exponents[ i ] = exponents[ x ];
         temp.coefficients[ i ] += coefficients[ x ];
         i++;
      }
   }
    return temp;
}
Polynomial &Polynomial::operator+=( const Polynomial &t )
{
   *this = *this + t;
   return *this;
}
Polynomial Polynomial::operator-( const Polynomial &t ) const
{
   Polynomial temp;
   bool exponentExists;
   int t;
   temp.coefficients[ 0 ] = coefficients[ 0 ] - t.coefficients[ 0 ];
   for ( i = 1; ( i < maxTerms ) && ( exponents[ i ] != 0 ); i++ )
   {
      temp.coefficients[ i ] = coefficients[ i ];
      temp.exponents[ i ] = exponents[ i ];
   }
   for ( int x = 1; x < maxTerms; x++ )
   {
      exponentExists = false;

      for ( int t = 1; ( t < maxTerms ) && ( !exponentExists ); t++ )

         if ( r.exponents[ x ] == temp.exponents[ t ] )
         {
            temp.coefficients[ t ] -= r.coefficients[ x ];
            exponentExists = true;
         }
      if ( !exponentExists )
      {
         temp.exponents[ i ] = t.exponents[ x ];
         temp.coefficients[ i ] -= t.coefficients[ x ];
         i++;
      }
   }

   return temp;
}
Polynomial &Polynomial::operator-=( const Polynomial &t )
{
   *this = *this - t;
   return *this;
}
Polynomial Polynomial::operator*( const Polynomial &t ) const
{
   Polynomial temp;
   int s = 1;

   for ( int x = 0; ( x < maxTerms ) &&
      ( x == 0  || coefficients[ x ] != 0 ); x++ )

      for ( int y = 0; ( y < maxTerms ) &&
         ( y == 0 || t.coefficients[ y ] != 0 ); y++ )

         if ( coefficients[ x ] * t.coefficients[ y ] )

            if ( ( exponents[ x ] == 0 ) && ( t.exponents[ y ] == 0 ) )
               temp.coefficients[ 0 ] +=
                  coefficients[ x ] * t.coefficients[ y ];
            else
            {
               temp.coefficients[ s ] =
                  coefficients[ x ] * t.coefficients[ y ];
               temp.exponents[ s ] = exponents[ x ] + t.exponents[ y ];
               s++;
            }

   polynomialCombine( temp );
   return temp;
}
Polynomial &Polynomial::operator*=( const Polynomial &t )
{
   *this = *this * t;
   return *this;
}
Polynomial::~Polynomial()
{

}
void Polynomial::enterTerms()
{
   bool found = false;
   int c, e, term;

   cout << "\nEnter number of polynomial terms: ";
   cin >> numberOfTerms;

   for ( int n = 0; n < maxTerms && n < numberOfTerms; n++ )
   {
      cout << "\nEnter coefficient: ";
      cin >> c;
      cout << "Enter exponent: ";
      cin >> e;

      if ( c != 0 )
      {
         if ( e == 0 )
         {
            coefficients[ 0 ] += c;
            continue;
         }
         for ( term = 1; ( term < maxTerms ) &&
                ( coefficients[ term ] != 0 ); term++ )

            if ( e == exponents[ term ] )
            {
               coefficients[ term ] += c;
               exponents[ term ] = e;
               found = true;
            }

         if ( !found )
         {
            coefficients[ term ] += c;
            exponents[ term ] = e;
         }
      }
   }
}
void Polynomial::printPolynomial() const
{
   int start;
   bool zero = false;

   if ( coefficients[ 0 ] )
   {
      cout << coefficients[ 0 ];
      start = 1;
      zero = true;
   }
   else
   {
      if ( coefficients[ 1 ] )
      {
         cout << coefficients[ 1 ] << 'x';
         if ( ( exponents[ 1 ] != 0 ) && ( exponents[ 1 ] != 1 ) )
            cout << '^' << exponents[ 1 ];

         zero = true;  // at least one term exists
      } // end inner if

      start = 2;
   } // end else

   // output remaining polynomial terms
   for ( int x = start; x < maxTerms; x++ )
   {
      if ( coefficients[ x ] != 0 )
      {
         cout << showpos << coefficients[ x ] << noshowpos << 'x';

         if ( ( exponents[ x ] != 0 ) && ( exponents[ x ] != 1 ) )
            cout << '^' << exponents[ x ];

         zero = true;
      }
int Polynomial::getNumberOfTerms() const
{
   return numberOfTerms;
}
int Polynomial::getTermExponent( int term ) const
{
   return exponents[ term ];
}
int Polynomial::getTermCoefficient( int term ) const
{
   return coefficients[ term ];
}
