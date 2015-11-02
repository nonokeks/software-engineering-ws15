#include "inchtocentimeterconverter.hpp"

#include <string>

InchToCentimeterConverter::InchToCentimeterConverter()
{
}

/*In: double value of inch
 *Out: centimeter value of input inch
 */
double InchToCentimeterConverter::convert(double inInch){
  return inInch*2.54;
}

std::string InchToCentimeterConverter::toString() const{
  return "Inch to Centimeter Converter";
}

void InchToCentimeterConverter::print() const{
  std::cout << toString();
}
