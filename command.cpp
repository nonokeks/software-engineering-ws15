#include "command.hpp"
#include <iostream>


Command::Command(std::string const converter, Action const action, double const value):
	_converter(converter),
	_action(action),
	_value(value){}

Command::Command():
	_converterptr(),
	_action(),
	_value(){}
	
double Command::getValue() const {
	return _value;
}

void Command::execute() const {

	auto factory = ConverterFactory::instance();
    auto converter = factory->create(_converter);
    std::shared_ptr<UnitConverter> conv_ptr(converter);

    if (converter != nullptr)
	{
	  std::cout << conv_ptr->toString() << " has converted "<< _value << " to " << ((conv_ptr.get()->*_action)(_value)) <<"!"<<std::endl; 
	}
	else{
	std::cout << "ERROR: No Converter!" << std::endl;
	}

}