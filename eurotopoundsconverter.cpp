#include "eurotopoundsconverter.hpp"

#include <string>

EuroToPoundsConverter::EuroToPoundsConverter()
{
}

/*In: double value of euro
 *Out: pounds value of input euro 31.10.2105
 */
double EuroToPoundsConverter::convert(double inEuro){
  return inEuro * 0.712187864;
}

std::string EuroToPoundsConverter::toString() const{
  return "Euro To Pounds Converter";
}

void EuroToPoundsConverter::print() const{
  std::cout << toString();
}

UnitConverter*  EuroToPoundsConverter::clone() const{
	return new EuroToPoundsConverter();
}
