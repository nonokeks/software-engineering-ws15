#ifndef INCHTOCENTIMETERCONVERTER_H
#define INCHTOCENTIMETERCONVERTER_H

#include "lengthconverter.hpp"

class InchToCentimeterConverter : public LengthConverter
{
  public:
    InchToCentimeterConverter();
    double convert(const double inInch)const override;
    std::string toString() const override;
    void print() const override;
    InchToCentimeterConverter* clone() const override;
};

#endif // INCHTOCENTIMETERCONVERTER_H
