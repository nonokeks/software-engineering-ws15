#include "eurotodollarconverter.hpp"

#include <string>

EuroToDollarConverter::EuroToDollarConverter(){}
EuroToDollarConverter::EuroToDollarConverter(std::shared_ptr<UnitConverter> converter): CurrencyConverter{converter} {}

/*In: double value of euro
 *Out: dollar value of input euro 31.10.2105
 */
double EuroToDollarConverter::convert(const double inEuro)const{
    if (UnitConverter::base_ != nullptr)
	{
		return UnitConverter::base_->convert(inEuro);
	}
	else
	{
		return inEuro * 1.1009;
	}
  	
}

std::string EuroToDollarConverter::toString() const{
  return "Euro To Dollar Converter";
}

void EuroToDollarConverter::print() const{
  std::cout << toString();
}

EuroToDollarConverter*  EuroToDollarConverter::clone() const{
	return new EuroToDollarConverter();
}
