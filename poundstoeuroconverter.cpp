#include "poundstoeuroconverter.hpp"

#include <string>

PoundsToEuroConverter::PoundsToEuroConverter(){}
PoundsToEuroConverter::PoundsToEuroConverter(std::shared_ptr<CurrencyConverter> converter): 
CurrencyConverter{converter} {}

/*In: double value of Pounds
 *Out: Euro value of input Pounds as of 31.10.15
 */
double PoundsToEuroConverter::convert(const double inPounds) const{
	//Exeption:
	if(inPounds < 0)
	{
		throw ValueError(inPounds, "PoundsToEuro");
	}
	//Calculation:
	if (base_ != nullptr)
	{
		return base_->convert(inPounds*1.4041239);
	}
    return inPounds*1.4041239;
}

std::string PoundsToEuroConverter::toString() const{
  return "Pounds to Euro Converter";
}

void PoundsToEuroConverter::print() const{
  std::cout << toString();
}

PoundsToEuroConverter* PoundsToEuroConverter::clone() const{
	return new PoundsToEuroConverter();
}