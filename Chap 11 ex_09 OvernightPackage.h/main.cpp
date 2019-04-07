#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include <string>
#include "Package.h"

class OvernightPackage : public Package
{
public:
   OvernightPackage( const std::string &, const std::string &, const std::string &,
      const std::string &, int, const std::string &, const std::string &, const std::string &,
      const std::string &, int, double, double, double );

   void setOvernightFeePerOunce( double );
   double getOvernightFeePerOunce() const;
   double calculateCost() const;
private:
   double overnightFeePerOunce;
};
#endif
