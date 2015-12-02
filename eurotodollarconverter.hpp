#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "currencyconverter.hpp"

class EuroToDollarConverter : public CurrencyConverter
{
  public:
    EuroToDollarConverter();
    double convert(const double inCelsius)const override;
    std::string toString() const override;
    void print() const override;
    EuroToDollarConverter*  clone() const override;
};

#endif // EUROTODOLLARCONVERTER_H
