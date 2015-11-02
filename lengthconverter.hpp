#ifndef LENGTHCONVERTER_H
#define LENGTHCONVERTER_H

#include "unitconverter.hpp"

class LengthConverter : public UnitConverter
{
  public:
    LengthConverter();
    virtual double convert(double length) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif // LENGTHCONVERTER_H
