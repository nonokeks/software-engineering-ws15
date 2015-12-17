#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include "unitconverter.hpp"
#include "decorator.hpp"
#include <memory>

class CurrencyConverter : public UnitConverter
{
  public:
    CurrencyConverter();
    CurrencyConverter(std::shared_ptr<UnitConverter> converter);
    virtual double convert(double length) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif // CURRENCYCONVERTER_H
