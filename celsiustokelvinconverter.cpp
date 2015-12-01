#include "celsiustokelvinconverter.hpp"

#include <string>

CelsiusToKelvinConverter::CelsiusToKelvinConverter()
{
}

/*In: double value of celsius
 *Out: kelvin value of input celsius
 */
double CelsiusToKelvinConverter::convert(double inCelsius){
  return inCelsius + 273.15;
}

std::string CelsiusToKelvinConverter::toString() const{
  return "Celsius To Kelvin Converter";
}

void CelsiusToKelvinConverter::print() const{
  std::cout << toString();
}

UnitConverter*  CelsiusToKelvinConverter::clone() const{
	return new CelsiusToKelvinConverter();
}