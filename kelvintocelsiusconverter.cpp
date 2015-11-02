#include "kelvintocelsiusconverter.hpp"

#include <string>

KelvinToCelsiusConverter::KelvinToCelsiusConverter()
{
}

/*In: double value of kelvin
 *Out: celsius value of input kelvin
 */
double KelvinToCelsiusConverter::convert(double inKelvin){
  return inKelvin - 273.15;
}

std::string KelvinToCelsiusConverter::toString() const{
  return "Kelvin To Celsius Converter";
}

void KelvinToCelsiusConverter::print() const{
  std::cout << toString();
}
