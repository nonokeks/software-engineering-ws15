#include "currencyconverter.hpp"

#include <string>

CurrencyConverter::CurrencyConverter():UnitConverter{}{}

CurrencyConverter::CurrencyConverter(std::shared_ptr<CurrencyConverter> converter):UnitConverter{converter}{}