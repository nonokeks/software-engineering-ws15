#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "decorator.hpp"
#include "unitconverter.hpp"
#include <memory>

class DollarToEuroConverter : public Decorator
{
  public:
    DollarToEuroConverter();
    DollarToEuroConverter(std::shared_ptr<UnitConverter> converter);
    double convert(const double inDollars) const override;
    std::string toString() const override;
    void print() const override;
    DollarToEuroConverter*  clone() const override;
};

#endif // DOLLARTOEUROCONVERTER_H
