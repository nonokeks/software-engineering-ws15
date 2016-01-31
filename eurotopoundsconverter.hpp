#ifndef EUROTOPOUNDSCONVERTER_H
#define EUROTOPOUNDSCONVERTER_H

#include "currencyconverter.hpp"
#include "valueerror.hpp"
#include <memory>

class EuroToPoundsConverter : public CurrencyConverter
{
  public:
    EuroToPoundsConverter();
    EuroToPoundsConverter(std::shared_ptr<CurrencyConverter> converter);
    double convert(const double inCelsius)const override;
    std::string toString() const override;
    void print() const override;
    EuroToPoundsConverter*  clone() const override;
};

#endif // EUROTOPOUNDSCONVERTER_H
