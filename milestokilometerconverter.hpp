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
};

#endif // MILESTOKILOMETERCONVERTER_H
