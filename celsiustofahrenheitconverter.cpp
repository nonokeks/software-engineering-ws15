#include "celsiustofahrenheitconverter.hpp"

#include <string>

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter()
{
}

/*In: double value of celsius
 *Out: fahrenheit value of input celsius
 */
double CelsiusToFahrenheitConverter::convert(double inCelsius){
  return (1.8) * inCelsius + 32;
}

std::string CelsiusToFahrenheitConverter::toString() const{
  return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const{
  std::cout << toString();
}
