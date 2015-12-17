#include "decorator.hpp"

Decorator::Decorator(){}
Decorator::Decorator(std::shared_ptr<UnitConverter> converter): UnitConverter{converter}, myconverter_{converter} {}

/*
template <class T>
double Decorator<T>::convert(const double inValue)const{
	if (myconverter_ != nullptr)
	{
		return myconverter_->convert(inValue);
	}
	else{
		return inValue;
	}
  
}

template <class T>
std::string Decorator<T>::toString() const{
	if (myconverter_ != nullptr)
	{
		return myconverter_->toString();
	}
	else{
		return "No Converter";
	}
  
}

template <class T>
void Decorator<T>::print() const{
  std::cout << toString();
}*/

/*
void Decorator<T>::link(std::shared_ptr<UnitConverter> c){
  myconverter_ = c;
}*/

