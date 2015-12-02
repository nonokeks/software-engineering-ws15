#ifndef KILOMETERTOMILESCONVERTER_H
#define KILOMETERTOMILESCONVERTER_H

#include "lengthconverter.hpp"

class KilometerToMilesConverter : public LengthConverter
{
  public:
    KilometerToMilesConverter();
    double convert(const double inKilometer)const override;
    std::string toString() const override;
    void print() const override;
    KilometerToMilesConverter*  clone() const override;
};

#endif // KILOMETERTOMILESCONVERTER_H
