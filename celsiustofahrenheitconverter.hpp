#ifndef CELSIUSTOFAHRENHEITCONVERTER_H
#define CELSIUSTOFAHRENHEITCONVERTER_H

#include "temperatureconverter.hpp"
#include "unitconverter.hpp"

class CelsiusToFahrenheitConverter : public TemperatureConverter
{
  public:
    CelsiusToFahrenheitConverter();
    double convert(const double inValue) const override;
    std::string toString() const override;
    void print() const override;
    UnitConverter* clone() const override;
};

#endif // CELSIUSTOFAHRENHEITCONVERTER_H
