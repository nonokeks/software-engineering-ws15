#include "inversionconverter.hpp"
#include "temperatureconverter.hpp"

InversionConverter::InversionConverter(): Decorator{}{}
InversionConverter::InversionConverter(std::shared_ptr<UnitConverter> converter): Decorator{converter}, c_{converter}{}
InversionConverter::~InversionConverter(){}

double InversionConverter::convert(const double inValue)const {
	if (dynamic_cast<TemperatureConverter*>(c_.get()))
	{
		std::cout << "Can not invert temperatures!"<< std::endl;
		return 0;
	}
	if (base_ != nullptr) {
		return ((inValue*inValue)/(base_->convert(inValue)));
	}
	else{
		return 0;
	}
}

std::string InversionConverter::toString() const {
	return "Inversion Converter";
}

void InversionConverter::print() const{
	std::cout << toString();
}

UnitConverter* InversionConverter::clone() const{
	return new InversionConverter();
}