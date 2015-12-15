#include "kilometertomilesconverter.hpp"

#include <string>

KilometerToMilesConverter::KilometerToMilesConverter(): Decorator{} {}
KilometerToMilesConverter::KilometerToMilesConverter(std::shared_ptr<UnitConverter> converter): 
Decorator{converter} {}
/*In: double value of kilometer
 *Out: miles value of input kilometer
 */
double KilometerToMilesConverter::convert(const double inKilometer)const{
  return inKilometer*0.62137;
}

std::string KilometerToMilesConverter::toString() const{
  return "Kilometer To Miles Converter";
}

void KilometerToMilesConverter::print() const{
  std::cout << toString();
}

KilometerToMilesConverter*  KilometerToMilesConverter::clone() const{
	return new KilometerToMilesConverter();
}