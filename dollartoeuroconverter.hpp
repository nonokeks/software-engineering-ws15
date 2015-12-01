#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyconverter.hpp"

class DollarToEuroConverter : public CurrencyConverter
{
  public:
    DollarToEuroConverter();
    double convert(const double inDollars) const;
    std::string toString() const;
    void print() const;
    UnitConverter*  clone() const;
};

#endif // DOLLARTOEUROCONVERTER_H
