#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "currencyconverter.hpp"

class EuroToDollarConverter : public CurrencyConverter
{
  public:
    EuroToDollarConverter();
    double convert(double inCelsius);
    std::string toString() const;
    void print() const;
    UnitConverter*  clone() const;
};

#endif // EUROTODOLLARCONVERTER_H
