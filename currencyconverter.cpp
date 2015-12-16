#include "currencyconverter.hpp"

#include <string>

CurrencyConverter::CurrencyConverter()
{
}

CurrencyConverter::CurrencyConverter(std::shared_ptr<UnitConverter> converter):Decorator{converter}{}