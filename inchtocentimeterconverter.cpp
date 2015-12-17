#include "inchtocentimeterconverter.hpp"

#include <string>

InchToCentimeterConverter::InchToCentimeterConverter():LengthConverter{}{}
InchToCentimeterConverter::InchToCentimeterConverter(std::shared_ptr<LengthConverter> converter):LengthConverter{converter} {}

/*In: double value of inch
 *Out: centimeter value of input inch
 */
double InchToCentimeterConverter::convert(const double inInch)const{
	if (base_ != nullptr)
	{
		return base_->convert(inInch*2.54);
	}
    return inInch*2.54;
}

std::string InchToCentimeterConverter::toString() const{
  return "Inch to Centimeter Converter";
}

void InchToCentimeterConverter::print() const{
  std::cout << toString();
}

InchToCentimeterConverter*  InchToCentimeterConverter::clone() const{
	return new InchToCentimeterConverter();
}