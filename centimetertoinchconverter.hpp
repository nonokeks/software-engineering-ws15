#ifndef CENTIMETERTOINCHCONVERTER_H
#define CENTIMETERTOINCHCONVERTER_H

#include "decorator.hpp"
#include "unitconverter.hpp"
#include <memory>

class CentimeterToInchConverter : public Decorator
{
  public:
    CentimeterToInchConverter();
    CentimeterToInchConverter(std::shared_ptr<UnitConverter> converter);
    double convert(const double inCentimeter)const override;
    std::string toString() const override;
    void print() const override;
    CentimeterToInchConverter*  clone() const override;
};

#endif // CENTIMETERTOINCHCONVERTER_H
