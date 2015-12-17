#include "milestokilometerconverter.hpp"

#include <string>
#include <iostream>

MilesToKilometerConverter::MilesToKilometerConverter(){}
MilesToKilometerConverter::MilesToKilometerConverter(std::shared_ptr<UnitConverter> converter): 
LengthConverter{converter} {}
/*In: double value of miles
 *Out: kilometer value of input miles
 */
double MilesToKilometerConverter::convert(const double inMiles)const{
	
	if (UnitConverter::base_ != nullptr)
	{
		std::cout << "base get";
		return UnitConverter::base_->convert(inMiles*1.609);
	}
	
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