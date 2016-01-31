#include "celsiustokelvinconverter.hpp"

#include <string>

CelsiusToKelvinConverter::CelsiusToKelvinConverter()
{
}
CelsiusToKelvinConverter::CelsiusToKelvinConverter(std::shared_ptr<TemperatureConverter> converter):
TemperatureConverter{converter}{}

/*In: double value of celsius
 *Out: kelvin value of input celsius
 */
double CelsiusToKelvinConverter::convert(const double inCelsius)const{
	//Exeption:
	if(inCelsius < -273.15 || inCelsius > 273.15)
	{
		throw ValueError(inCelsius, "CelsiusToKelvin");
	}
	//Calculation:
    if (base_ != nullptr)
	{
		return base_->convert(inCelsius + 273.15);
	}
    return inCelsius + 273.15;
}

std::string CelsiusToKelvinConverter::toString() const{
  return "Celsius To Kelvin Converter";
}

void CelsiusToKelvinConverter::print() const{
  std::cout << toString();
}

CelsiusToKelvinConverter*  CelsiusToKelvinConverter::clone() const{
 return new CelsiusToKelvinConverter();
}