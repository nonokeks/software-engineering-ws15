#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyconverter.hpp"

class DollarToEuroConverter : public CurrencyConverter
{
  public:
    DollarToEuroConverter();
    double convert(const double inDollars) const override;
    std::string toString() const override;
    void print() const override;
    DollarToEuroConverter*  clone() const override;
};

#endif // DOLLARTOEUROCONVERTER_H
