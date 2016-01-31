#include "celsiustofahrenheitconverter.hpp"

#include <string>

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter()
{
}

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter(std::shared_ptr<TemperatureConverter> converter): 
TemperatureConverter{converter}{}

/*In: double value of celsius
 *Out: fahrenheit value of input celsius
 */
double CelsiusToFahrenheitConverter::convert( const double inValue) const {
	//Exeption:
	if(inValue < -273.0 || inValue > 273.0)
	{
		throw ValueError(inValue, "CelsiusToFahrenheit");
	}
	//Calculation:
	if (base_ != nullptr)
	{
		return base_->convert((1.8) * inValue + 32);
	}
    return (1.8) * inValue + 32;
}

std::string CelsiusToFahrenheitConverter::toString() const{
  return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const{
  std::cout << toString();
}

CelsiusToFahrenheitConverter* CelsiusToFahrenheitConverter::clone() const{
	return new CelsiusToFahrenheitConverter();
	return nullptr;
}