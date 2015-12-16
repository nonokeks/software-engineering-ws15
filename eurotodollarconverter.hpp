#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "decorator.hpp"
#include "currencyconverter.hpp"
#include <memory>

class EuroToDollarConverter : public CurrencyConverter
{
  public:
    EuroToDollarConverter();
    EuroToDollarConverter(std::shared_ptr<UnitConverter> converter);
    double convert(const double inCelsius)const override;
    std::string toString() const override;
    void print() const override;
    EuroToDollarConverter*  clone() const override;
};

#endif // EUROTODOLLARCONVERTER_H
