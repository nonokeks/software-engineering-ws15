#ifndef EUROTOPOUNDSCONVERTER_H
#define EUROTOPOUNDSCONVERTER_H

#include "currencyconverter.hpp"

class EuroToPoundsConverter : public CurrencyConverter
{
  public:
    EuroToPoundsConverter();
    double convert(double inCelsius);
    std::string toString() const;
    void print() const;
    UnitConverter*  clone() const;
};

#endif // EUROTOPOUNDSCONVERTER_H
