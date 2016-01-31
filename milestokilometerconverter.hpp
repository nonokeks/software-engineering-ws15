#ifndef MILESTOKILOMETERCONVERTER_H
#define MILESTOKILOMETERCONVERTER_H

#include "valueerror.hpp"
#include "lengthconverter.hpp"
#include <memory>

class MilesToKilometerConverter : public LengthConverter
{
  public:
    MilesToKilometerConverter();
    MilesToKilometerConverter(std::shared_ptr<LengthConverter> converter);
    double convert(const double inMiles)const override;
    std::string toString() const override;
    void print() const override;
    MilesToKilometerConverter*  clone() const override;
};

#endif // MILESTOKILOMETERCONVERTER_H
