#include "currencyconverter.hpp"

#include <string>

CurrencyConverter::CurrencyConverter():UnitConverter{}{}

CurrencyConverter::CurrencyConverter(std::shared_ptr<UnitConverter> converter):UnitConverter{converter}{}