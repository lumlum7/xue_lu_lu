#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

class Account
{
public:
   Account( double );
   virtual void credit( double );
   virtual bool debit( double );
   void setBalance( double );
   double getBalance();
private:
   double balance;
};

#endif // ACCOUNT_H_INCLUDED
