#include "centimetertoinchconverter.hpp"

#include <string>

CentimeterToInchConverter::CentimeterToInchConverter(){}
CentimeterToInchConverter::CentimeterToInchConverter(std::shared_ptr<LengthConverter> converter): 
LengthConverter{converter} {}

/*In: double value of inch
 *Out: centimeter value of input inch
 */
double CentimeterToInchConverter::convert(const double inCentimeter)const{
	if (UnitConverter::base_ != nullptr)
	{
		return UnitConverter::base_->convert(inCentimeter*0.393701);
	}
    return inCentimeter*0.393701;
}

std::string CentimeterToInchConverter::toString() const{
  return "Centimeter To Inch Converter";
}

void CentimeterToInchConverter::print() const{
  std::cout << toString();
}

CentimeterToInchConverter*  CentimeterToInchConverter::clone() const{
	return new CentimeterToInchConverter();
}
