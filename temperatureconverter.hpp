#ifndef TEMPERATURECONVERTER_H
#define TEMPERATURECONVERTER_H

#include "unitconverter.hpp"
#include <memory>

class TemperatureConverter : public UnitConverter
{
  public:
    TemperatureConverter();
    TemperatureConverter(std::shared_ptr<TemperatureConverter> converter);
    virtual double convert(const double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
    virtual UnitConverter* clone() const = 0;
};

#endif // TEMPERATURECONVERTER_H
