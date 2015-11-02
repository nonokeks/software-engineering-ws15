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
};

#endif // INCHTOCENTIMETERCONVERTER_H
