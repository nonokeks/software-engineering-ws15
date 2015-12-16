#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>
#include <memory>

class UnitConverter
{
  public:
    UnitConverter();
    virtual double convert(const double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
    virtual UnitConverter* clone() const = 0;
    //virtual void link(std::shared_ptr<UnitConverter> c) = 0;
};

#endif // CONVERTER_H
