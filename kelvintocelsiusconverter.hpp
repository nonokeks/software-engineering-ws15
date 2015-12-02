#ifndef KELVINTOCELSIUSCONVERTER_H
#define KELVINTOCELSIUSCONVERTER_H

#include "temperatureconverter.hpp"

class KelvinToCelsiusConverter : public TemperatureConverter
{
  public:
    KelvinToCelsiusConverter();
    double convert(const double inKelvin)const override;
    std::string toString() const override;
    void print() const override;
    KelvinToCelsiusConverter*  clone() const override;
};

#endif // KELVINTOCELSIUSCONVERTER_H
