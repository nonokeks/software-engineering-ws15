#include "command.hpp"
#include <iostream>

Command::Command(std::shared_ptr<UnitConverter> converter, Action action, double value):
	_converter(converter),
	_action(action),
	_value(value){}
	
double Command::getValue() const {
	return _value;
}
	
void Command::execute() const {
	if(_converter != nullptr){
		std::cout << (_converter.get()->*_action)(_value) << std::endl;
	}
    else{
    	std::cout << "No converter found!" << std::endl;
    }
}
