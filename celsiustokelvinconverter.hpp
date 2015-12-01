#ifndef CELSIUSTOKELVINCONVERTER_H
#define CELSIUSTOKELVINCONVERTER_H

#include "temperatureconverter.hpp"

class CelsiusToKelvinConverter : public TemperatureConverter
{
  public:
    CelsiusToKelvinConverter();
    double convert(const double inCelsius)const override;
    std::string toString() const override;
    void print() const override;
    UnitConverter*  clone() const override;
};

#endif // CELSIUSTOKELVINCONVERTER_H
