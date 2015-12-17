#ifndef KELVINTOCELSIUSCONVERTER_H
#define KELVINTOCELSIUSCONVERTER_H

#include "temperatureconverter.hpp"
#include <memory>

class KelvinToCelsiusConverter : public TemperatureConverter
{
  public:
    KelvinToCelsiusConverter();
    KelvinToCelsiusConverter(std::shared_ptr<TemperatureConverter> converter);
    double convert(const double inKelvin)const override;
    std::string toString() const override;
    void print() const override;
    KelvinToCelsiusConverter*  clone() const override;
};

#endif // KELVINTOCELSIUSCONVERTER_H
