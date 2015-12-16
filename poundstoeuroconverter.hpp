#ifndef POUNDSTOEUROCONVERTER_H
#define POUNDSTOEUROCONVERTER_H

#include "decorator.hpp"
#include "currencyconverter.hpp"
#include <memory>


class PoundsToEuroConverter : public CurrencyConverter
{
  public:
    PoundsToEuroConverter();
    //PoundsToEuroConverter(std::shared_ptr<UnitConverter> converter);
    double convert(const double inDollars) const override;
    std::string toString() const override;
    void print() const override;
    PoundsToEuroConverter* clone() const override;
};

#endif // POUNDSTOEUROCONVERTER_H
