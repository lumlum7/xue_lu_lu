#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include "Package.h"

class OvernightPackage : public Package
{
public:
   OvernightPackage( const std::string &, const std::string &, const std::string &,
      const std::string &, int, const std::string &, const std::string &, const std::string &,
      const std::string &, int, double, double, double );

   void setOvernightFeePerOunce( double );
   double getOvernightFeePerOunce() const;

   virtual double calculateCost() const;
private:
   double overnightFeePerOunce;
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
