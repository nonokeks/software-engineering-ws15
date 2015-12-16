#include "inversionconverter.hpp"

InversionConverter::InversionConverter():Decorator{}{}
InversionConverter::InversionConverter(std::shared_ptr<UnitConverter> converter):Decorator{},c_{converter}{}
InversionConverter::~InversionConverter(){}

double InversionConverter::convert(const double inValue)const {
	//?
	return 0.0;
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