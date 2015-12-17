#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>
#include <memory>

class UnitConverter
{
  public:
    UnitConverter();
    UnitConverter(std::shared_ptr<UnitConverter> converter);
    virtual double convert(const double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
    virtual UnitConverter* clone() const = 0;
    //virtual void link(std::shared_ptr<UnitConverter> c) = 0;

  //private:
  	std::shared_ptr<UnitConverter> base_;
};

#endif // CONVERTER_H
