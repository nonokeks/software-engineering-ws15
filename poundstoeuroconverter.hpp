#ifndef POUNDSTOEUROCONVERTER_H
#define POUNDSTOEUROCONVERTER_H

#include "currencyconverter.hpp"
#include "valueerror.hpp"
#include <memory>


class PoundsToEuroConverter : public CurrencyConverter
{
  public:
    PoundsToEuroConverter();
    PoundsToEuroConverter(std::shared_ptr<CurrencyConverter> converter);
    double convert(const double inDollars) const override;
    std::string toString() const override;
    void print() const override;
    PoundsToEuroConverter* clone() const override;
};

#endif // POUNDSTOEUROCONVERTER_H
