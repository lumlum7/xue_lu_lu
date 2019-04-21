#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED

#include "Account.h"

class SavingsAccount : public Account
{
public:
   SavingsAccount( double, double );

   double calculateInterest();
private:
   double interestRate;
};

#endif
