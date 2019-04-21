#include "Account.h"
using namespace std;

class SavingsAccount : public Account
{
public:
   SavingsAccount( double, double );

   double calculateInterest();

private:
   double interestRate;
};
