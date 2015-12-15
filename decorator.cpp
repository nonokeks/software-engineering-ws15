#include "decorator.hpp"

Decorator::Decorator(){}
Decorator::Decorator(std::shared_ptr<UnitConverter> converter): myconverter_{converter} {}

double Decorator::convert(const double inValue)const{
  return myconverter_->convert(inValue);
}

std::string Decorator::toString() const{
  return myconverter_->toString();
}

void Decorator::print() const{
  std::cout << toString();
}