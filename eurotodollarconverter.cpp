#include "eurotodollarconverter.hpp"

#include <string>

EuroToDollarConverter::EuroToDollarConverter()
{
}

/*In: double value of euro
 *Out: dollar value of input euro 31.10.2105
 */
double EuroToDollarConverter::convert(double inEuro){
  return inEuro * 1.1009;
}

std::string EuroToDollarConverter::toString() const{
  return "Euro To Dollar Converter";
}

void EuroToDollarConverter::print() const{
  std::cout << toString();
}

UnitConverter*  EuroToDollarConverter::clone() const{
	return new EuroToDollarConverter();
}
