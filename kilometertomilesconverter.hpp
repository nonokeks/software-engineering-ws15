#ifndef KILOMETERTOMILESCONVERTER_H
#define KILOMETERTOMILESCONVERTER_H

#include "valueerror.hpp"
#include "lengthconverter.hpp"
#include <memory>

class KilometerToMilesConverter : public LengthConverter
{
  public:
    KilometerToMilesConverter();
    KilometerToMilesConverter(std::shared_ptr<LengthConverter> converter);
    double convert(const double inKilometer)const override;
    std::string toString() const override;
    void print() const override;
    KilometerToMilesConverter*  clone() const override;
};

#endif // KILOMETERTOMILESCONVERTER_H
