#ifndef MILESTOKILOMETERCONVERTER_H
#define MILESTOKILOMETERCONVERTER_H

#include "decorator.hpp"
#include "lengthconverter.hpp"
#include <memory>

class MilesToKilometerConverter : public LengthConverter
{
  public:
    MilesToKilometerConverter();
    MilesToKilometerConverter(std::shared_ptr<UnitConverter> converter);
    double convert(const double inMiles)const override;
    std::string toString() const override;
    void print() const override;
    MilesToKilometerConverter*  clone() const override;
};

#endif // MILESTOKILOMETERCONVERTER_H
