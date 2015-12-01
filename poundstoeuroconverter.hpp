#ifndef POUNDSTOEUROCONVERTER_H
#define POUNDSTOEUROCONVERTER_H

#include "currencyconverter.hpp"

class PoundsToEuroConverter : public CurrencyConverter
{
  public:
    PoundsToEuroConverter();
    double convert(const double inDollars);
    std::string toString() const;
    void print() const;
    UnitConverter* clone() const;
};

#endif // POUNDSTOEUROCONVERTER_H
