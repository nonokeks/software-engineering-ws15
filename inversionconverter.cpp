#include "inversionconverter.hpp"

InversionConverter::InversionConverter():Decorator{}{}
InversionConverter::InversionConverter(std::shared_ptr<UnitConverter> converter):Decorator{converter},c_{converter}{}
InversionConverter::~InversionConverter(){}

double InversionConverter::convert(const double inValue)const {
	if (UnitConverter::base_ != nullptr) {
		return UnitConverter::base_->convert((inValue*inValue)/(c_->convert(inValue)));
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