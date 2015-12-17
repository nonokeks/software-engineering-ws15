#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyconverter.hpp"
#include <memory>

class DollarToEuroConverter : public CurrencyConverter
{
  public:
    DollarToEuroConverter();
    DollarToEuroConverter(std::shared_ptr<CurrencyConverter> converter);
    double convert(const double inDollars) const override;
    std::string toString() const override;
    void print() const override;
    DollarToEuroConverter*  clone() const override;
};

#endif // DOLLARTOEUROCONVERTER_H
