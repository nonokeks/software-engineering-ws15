#include "eurotopoundsconverter.hpp"

#include <string>

EuroToPoundsConverter::EuroToPoundsConverter(){}
EuroToPoundsConverter::EuroToPoundsConverter(std::shared_ptr<UnitConverter> converter): CurrencyConverter{converter} {}

/*In: double value of euro
 *Out: pounds value of input euro 31.10.2105
 */
double EuroToPoundsConverter::convert(const double inEuro)const{
	if (UnitConverter::base_ != nullptr)
	{
		return UnitConverter::base_->convert(inEuro);
	}
  	return inEuro * 0.712187864;
}

std::string EuroToPoundsConverter::toString() const{
  return "Euro To Pounds Converter";
}

void EuroToPoundsConverter::print() const{
  std::cout << toString();
}

EuroToPoundsConverter*  EuroToPoundsConverter::clone() const{
	return new EuroToPoundsConverter();
}
