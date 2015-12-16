#ifndef INCHTOCENTIMETERCONVERTER_H
#define INCHTOCENTIMETERCONVERTER_H

#include "decorator.hpp"
#include "lengthconverter.hpp"
#include <memory>

class InchToCentimeterConverter : public LengthConverter
{
  public:
    InchToCentimeterConverter();
    InchToCentimeterConverter(std::shared_ptr<UnitConverter> converter);
    double convert(const double inInch)const override;
    std::string toString() const override;
    void print() const override;
    InchToCentimeterConverter* clone() const override;
};

#endif // INCHTOCENTIMETERCONVERTER_H
