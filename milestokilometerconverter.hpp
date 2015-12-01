#ifndef MILESTOKILOMETERCONVERTER_H
#define MILESTOKILOMETERCONVERTER_H

#include "lengthconverter.hpp"

class MilesToKilometerConverter : public LengthConverter
{
  public:
    MilesToKilometerConverter();
    double convert(double inMiles);
    std::string toString() const;
    void print() const;
    UnitConverter*  clone() const;
};

#endif // MILESTOKILOMETERCONVERTER_H
