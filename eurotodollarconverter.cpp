#include "eurotodollarconverter.hpp"

#include <string>

EuroToDollarConverter::EuroToDollarConverter(){}
EuroToDollarConverter::EuroToDollarConverter(std::shared_ptr<CurrencyConverter> converter): CurrencyConverter{converter} {}

/*In: double value of euro
 *Out: dollar value of input euro 31.10.2105
 */
double EuroToDollarConverter::convert(const double inEuro)const{
	//Exeption:
	if(inEuro < 0)
	{
		throw ValueError(inEuro, "EuroToDollar");
	}
	//Calculation:
    if (base_ != nullptr)
	{
		return base_->convert(inEuro*1.1009);
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
