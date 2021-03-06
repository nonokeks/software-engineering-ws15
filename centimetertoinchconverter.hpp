#ifndef CENTIMETERTOINCHCONVERTER_H
#define CENTIMETERTOINCHCONVERTER_H

#include "lengthconverter.hpp"
#include <memory>

class CentimeterToInchConverter : public LengthConverter
{
  public:
    CentimeterToInchConverter();
    CentimeterToInchConverter(std::shared_ptr<LengthConverter> converter);
    double convert(const double inCentimeter)const override;
    std::string toString() const override;
    void print() const override;
    CentimeterToInchConverter*  clone() const override;
};

#endif // CENTIMETERTOINCHCONVERTER_H
