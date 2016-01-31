#include "kilometertomilesconverter.hpp"

#include <string>

KilometerToMilesConverter::KilometerToMilesConverter(){}
KilometerToMilesConverter::KilometerToMilesConverter(std::shared_ptr<LengthConverter> converter): 
LengthConverter{converter} {}
/*In: double value of kilometer
 *Out: miles value of input kilometer
 */
double KilometerToMilesConverter::convert(const double inKilometer)const{
	//Exeption:
	if(inKilometer < 0)
	{
		throw ValueError(inKilometer, "KilometerToMiles");
	}
	//Calculation:
	if (base_ != nullptr)
	{
		return base_->convert(inKilometer*0.62137);
	}
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