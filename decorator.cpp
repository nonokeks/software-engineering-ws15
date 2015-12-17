#include "decorator.hpp"

Decorator::Decorator(){}
Decorator::Decorator(std::shared_ptr<UnitConverter> converter): UnitConverter{converter}, myconverter_{converter} {}

/*
double Decorator::convert(const double inValue)const{
	if (myconverter_ != nullptr)
	{
		return myconverter_->convert(inValue);
	}
	else{
		return inValue;
	}
  
}

std::string Decorator::toString() const{
	if (myconverter_ != nullptr)
	{
		return myconverter_->toString();
	}
	else{
		return "No Converter";
	}
  
}

void Decorator::print() const{
  std::cout << toString();
}

void Decorator::link(std::shared_ptr<UnitConverter> c){
  myconverter_ = c;
}
*/
