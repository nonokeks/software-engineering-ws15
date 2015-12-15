#ifndef KILOMETERTOMILESCONVERTER_H
#define KILOMETERTOMILESCONVERTER_H

#include "decorator.hpp"
#include "unitconverter.hpp"
#include <memory>

class KilometerToMilesConverter : public Decorator
{
  public:
    KilometerToMilesConverter();
    KilometerToMilesConverter(std::shared_ptr<UnitConverter> converter);
    double convert(const double inKilometer)const override;
    std::string toString() const override;
    void print() const override;
    KilometerToMilesConverter*  clone() const override;
};

#endif // KILOMETERTOMILESCONVERTER_H
