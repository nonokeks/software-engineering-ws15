#include "valueerror.hpp"

ValueError::ValueError(double value, std::string converter): 
		value_{value}, converter_{converter}{}
ValueError::~ValueError(){}
void ValueError::throwExeption(){
	std::cout << "Error: Value " << value_ << " is out of range for "
	<< converter_ << "!" << std::endl;
}