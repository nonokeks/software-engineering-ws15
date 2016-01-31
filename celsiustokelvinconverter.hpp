#ifndef CELSIUSTOKELVINCONVERTER_H
#define CELSIUSTOKELVINCONVERTER_H

#include "temperatureconverter.hpp"
#include "valueerror.hpp"
#include <memory>

class CelsiusToKelvinConverter : public TemperatureConverter
{
  public:
    CelsiusToKelvinConverter();
    CelsiusToKelvinConverter(std::shared_ptr<TemperatureConverter> converter);
    double convert(const double inCelsius)const override;
    std::string toString() const override;
    void print() const override;
    CelsiusToKelvinConverter*  clone() const override;
};

#endif // CELSIUSTOKELVINCONVERTER_H
