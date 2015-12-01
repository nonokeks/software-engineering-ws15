#ifndef INCHTOCENTIMETERCONVERTER_H
#define INCHTOCENTIMETERCONVERTER_H

#include "lengthconverter.hpp"

class InchToCentimeterConverter : public LengthConverter
{
  public:
    InchToCentimeterConverter();
    double convert(double inInch);
    std::string toString() const;
    void print() const;
    UnitConverter* clone() const;
};

#endif // INCHTOCENTIMETERCONVERTER_H
