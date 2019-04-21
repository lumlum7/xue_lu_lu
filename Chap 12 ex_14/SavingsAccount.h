#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED

#include "Account.h"

class SavingsAccount : public Account
{
public:
   SavingsAccount( double, double );

   double calculateInterest();
private:
   double interestRate;
};

#endif // SAVINGSACCOUNT_H_INCLUDED
