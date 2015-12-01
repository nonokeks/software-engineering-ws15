#ifndef EUROTOPOUNDSCONVERTER_H
#define EUROTOPOUNDSCONVERTER_H

#include "currencyconverter.hpp"

class EuroToPoundsConverter : public CurrencyConverter
{
  public:
    EuroToPoundsConverter();
    double convert(const double inCelsius)const override;
    std::string toString() const override;
    void print() const override;
    UnitConverter*  clone() const override;
};

#endif // EUROTOPOUNDSCONVERTER_H
