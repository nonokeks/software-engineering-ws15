#ifndef CENTIMETERTOINCHCONVERTER_H
#define CENTIMETERTOINCHCONVERTER_H

#include "lengthconverter.hpp"

class CentimeterToInchConverter : public LengthConverter
{
  public:
    CentimeterToInchConverter();
    double convert(double inCentimeter);
    std::string toString() const;
    void print() const;
};

#endif // CENTIMETERTOINCHCONVERTER_H
