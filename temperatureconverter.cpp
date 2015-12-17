#include "temperatureconverter.hpp"

#include <string>

TemperatureConverter::TemperatureConverter()
{
}

TemperatureConverter::TemperatureConverter(std::shared_ptr<TemperatureConverter> converter): UnitConverter{converter}{}