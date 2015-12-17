#ifndef LENGTHCONVERTER_H
#define LENGTHCONVERTER_H

#include "unitconverter.hpp"
#include "decorator.hpp"
#include <memory>

class LengthConverter : public UnitConverter
{
  public:
    LengthConverter();
    LengthConverter(std::shared_ptr<LengthConverter> converter);
    virtual double convert(double length)const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
  
};

#endif // LENGTHCONVERTER_H
