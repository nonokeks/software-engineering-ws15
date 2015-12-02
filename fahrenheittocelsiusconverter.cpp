#include "fahrenheittocelsiusconverter.hpp"

#include <string>

FahrenheitToCelsiusConverter::FahrenheitToCelsiusConverter()
{
}

/*In: double value of fahrenheit
 *Out: celsius value of input fahrenheit
 */
double FahrenheitToCelsiusConverter::convert(const double inFahrenheit)const{
  return ((inFahrenheit-32)/(1.8));
}

std::string FahrenheitToCelsiusConverter::toString() const{
  return "Fahrenheit to Celsius Converter";
}

void FahrenheitToCelsiusConverter::print() const{
  std::cout << toString();
}

FahrenheitToCelsiusConverter*  FahrenheitToCelsiusConverter::clone() const{
	return new FahrenheitToCelsiusConverter();
}