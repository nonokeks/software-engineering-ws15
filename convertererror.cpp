#include "convertererror.hpp"

ConverterError::ConverterError(std::string converter): converter_{converter}{}
ConverterError::~ConverterError(){}
void ConverterError::throwExeption(){
	std::cout << "Error: Converter " << converter_ << " does not exist!" << std::endl;
}