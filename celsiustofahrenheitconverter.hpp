#ifndef CELSIUSTOFAHRENHEITCONVERTER_H
#define CELSIUSTOFAHRENHEITCONVERTER_H

#include "temperatureconverter.hpp"
#include "valueerror.hpp"
#include <memory>

class CelsiusToFahrenheitConverter : public TemperatureConverter
{
  public:
    CelsiusToFahrenheitConverter();
    CelsiusToFahrenheitConverter(std::shared_ptr<TemperatureConverter> converter);
    double convert(const double inValue) const override;
    std::string toString() const override;
    void print() const override;
    CelsiusToFahrenheitConverter* clone() const override;
};

#endif // CELSIUSTOFAHRENHEITCONVERTER_H
