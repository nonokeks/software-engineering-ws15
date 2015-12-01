#ifndef FAHRENHEITTOCELSIUSCONVERTER_H
#define FAHRENHEITTOCELSIUSCONVERTER_H

#include "temperatureconverter.hpp"

class FahrenheitToCelsiusConverter : public TemperatureConverter
{
  public:
    FahrenheitToCelsiusConverter();
    double convert(const double inFahrenheit) const override;
    std::string toString() const override;
    void print() const override;
    UnitConverter*  clone() const override;
};

#endif // FAHRENHEITTOCELSIUSCONVERTER_H
