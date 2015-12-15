#include "centimetertoinchconverter.hpp"

#include <string>

CentimeterToInchConverter::CentimeterToInchConverter(): Decorator{} {}
CentimeterToInchConverter::CentimeterToInchConverter(std::shared_ptr<UnitConverter> converter): 
Decorator{converter} {}

/*In: double value of inch
 *Out: centimeter value of input inch
 */
double CentimeterToInchConverter::convert(const double inCentimeter)const{
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
