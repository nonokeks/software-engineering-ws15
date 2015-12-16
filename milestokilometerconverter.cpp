#include "milestokilometerconverter.hpp"

#include <string>

MilesToKilometerConverter::MilesToKilometerConverter(){}
MilesToKilometerConverter::MilesToKilometerConverter(std::shared_ptr<UnitConverter> converter): 
LengthConverter{converter} {}
/*In: double value of miles
 *Out: kilometer value of input miles
 */
double MilesToKilometerConverter::convert(const double inMiles)const{
  return inMiles*1.609;
}

std::string MilesToKilometerConverter::toString() const{
  return "Miles To Kilometer Converter";
}

void MilesToKilometerConverter::print() const{
  std::cout << toString();
}

MilesToKilometerConverter* MilesToKilometerConverter::clone() const{
	return new MilesToKilometerConverter();
}