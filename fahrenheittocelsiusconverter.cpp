#include "fahrenheittocelsiusconverter.hpp"

#include <string>

FahrenheitToCelsiusConverter::FahrenheitToCelsiusConverter()
{
}
FahrenheitToCelsiusConverter::FahrenheitToCelsiusConverter(std::shared_ptr<TemperatureConverter> converter):
TemperatureConverter{converter}{}
/*In: double value of fahrenheit
 *Out: celsius value of input fahrenheit
 */
double FahrenheitToCelsiusConverter::convert(const double inFahrenheit)const{
	if (base_ != nullptr)
	{
		return base_->convert((inFahrenheit-32)/(1.8));
	}
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