#include "inchtocentimeterconverter.hpp"

#include <string>

InchToCentimeterConverter::InchToCentimeterConverter(): Decorator{} {}
InchToCentimeterConverter::InchToCentimeterConverter(std::shared_ptr<UnitConverter> converter): 
Decorator{converter} {}

/*In: double value of inch
 *Out: centimeter value of input inch
 */
double InchToCentimeterConverter::convert(const double inInch)const{
  return inInch*2.54;
}

std::string InchToCentimeterConverter::toString() const{
  return "Inch to Centimeter Converter";
}

void InchToCentimeterConverter::print() const{
  std::cout << toString();
}

InchToCentimeterConverter*  InchToCentimeterConverter::clone() const{
	return new InchToCentimeterConverter();
}