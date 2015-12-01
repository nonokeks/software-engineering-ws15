#ifndef MILESTOKILOMETERCONVERTER_H
#define MILESTOKILOMETERCONVERTER_H

#include "lengthconverter.hpp"

class MilesToKilometerConverter : public LengthConverter
{
  public:
    MilesToKilometerConverter();
    double convert(const double inMiles)const override;
    std::string toString() const override;
    void print() const override;
    UnitConverter*  clone() const override;
};

#endif // MILESTOKILOMETERCONVERTER_H
