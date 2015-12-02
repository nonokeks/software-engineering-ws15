#ifndef POUNDSTOEUROCONVERTER_H
#define POUNDSTOEUROCONVERTER_H

#include "currencyconverter.hpp"

class PoundsToEuroConverter : public CurrencyConverter
{
  public:
    PoundsToEuroConverter();
    double convert(const double inDollars) const override;
    std::string toString() const override;
    void print() const override;
    PoundsToEuroConverter* clone() const override;
};

#endif // POUNDSTOEUROCONVERTER_H
