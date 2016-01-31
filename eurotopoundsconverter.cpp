#include "eurotopoundsconverter.hpp"

#include <string>

EuroToPoundsConverter::EuroToPoundsConverter(){}
EuroToPoundsConverter::EuroToPoundsConverter(std::shared_ptr<CurrencyConverter> converter): CurrencyConverter{converter} {}

/*In: double value of euro
 *Out: pounds value of input euro 31.10.2105
 */
double EuroToPoundsConverter::convert(const double inEuro)const{
	//Exeption:
	if(inEuro < 0)
	{
		throw ValueError(inEuro, "EuroToPounds");
	}
	//Calculation:
	if (base_ != nullptr)
	{
		return base_->convert(inEuro);
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
