#ifndef KILOMETERTOMILESCONVERTER_H
#define KILOMETERTOMILESCONVERTER_H

#include "lengthconverter.hpp"

class KilometerToMilesConverter : public LengthConverter
{
  public:
    KilometerToMilesConverter();
    double convert(double inKilometer);
    std::string toString() const;
    void print() const;
    UnitConverter*  clone() const;
};

#endif // KILOMETERTOMILESCONVERTER_H
