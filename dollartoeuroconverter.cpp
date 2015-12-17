#include "dollartoeuroconverter.hpp"

#include <string>

DollarToEuroConverter::DollarToEuroConverter(){}
DollarToEuroConverter::DollarToEuroConverter(std::shared_ptr<CurrencyConverter> converter):CurrencyConverter{converter} {}

/*In: double value of dollars
 *Out: Euro value of input dollars as of 9.10.15
 */
double DollarToEuroConverter::convert(const double inputDollars) const{
	if (UnitConverter::base_ != nullptr)
	{
		return UnitConverter::base_->convert(inputDollars*0.88);
	}
	else
	{
		return inputDollars*0.88;
	}
  
}

std::string DollarToEuroConverter::toString() const{
  return "Dollar to Euro Converter";
}

void DollarToEuroConverter::print() const{
  std::cout << toString();
}

DollarToEuroConverter*  DollarToEuroConverter::clone() const{
  return new DollarToEuroConverter();
}