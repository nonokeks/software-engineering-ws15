#include "command.hpp"

Command::Command(std::shared_ptr<UnitConverter> converter, Action action, double value):
	_converter(converter),
	_action(action),
	_value(value){}
	
double Command::getValue() const {
		return _value;
	}
	
double Command::execute() const {
  return (_converter.get()->*_action)(_value);
}

