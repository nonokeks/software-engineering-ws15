#ifndef FAHRENHEITTOCELSIUSCONVERTER_H
#define FAHRENHEITTOCELSIUSCONVERTER_H

#include "temperatureconverter.hpp"
#include <memory>

class FahrenheitToCelsiusConverter : public TemperatureConverter
{
  public:
    FahrenheitToCelsiusConverter();
    FahrenheitToCelsiusConverter(std::shared_ptr<TemperatureConverter> converter);
    double convert(const double inFahrenheit) const override;
    std::string toString() const override;
    void print() const override;
    FahrenheitToCelsiusConverter*  clone() const override;
};

#endif // FAHRENHEITTOCELSIUSCONVERTER_H
