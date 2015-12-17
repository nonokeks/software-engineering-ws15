#include "lengthconverter.hpp"

#include <string>

LengthConverter::LengthConverter(){}

LengthConverter::LengthConverter(std::shared_ptr<LengthConverter> converter):UnitConverter{converter}{}