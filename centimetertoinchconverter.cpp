#include "centimetertoinchconverter.hpp"

#include <string>

CentimeterToInchConverter::CentimeterToInchConverter()
{
}

/*In: double value of inch
 *Out: centimeter value of input inch
 */
double CentimeterToInchConverter::convert(double inCentimeter){
  return inCentimeter*0.393701;
}

std::string CentimeterToInchConverter::toString() const{
  return "Centimeter To Inch Converter";
}

void CentimeterToInchConverter::print() const{
  std::cout << toString();
}
