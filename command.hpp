#ifndef COMMAND
#define COMMAND

#include "unitconverter.hpp"
#include <memory>

class Command {
	public:
		typedef double (UnitConverter::*Action)(const double) const;
		Command(std::shared_ptr<UnitConverter> converter, Action action, double value);
		
		double getValue() const;
		
		double execute() const;


	private:
		std::shared_ptr<UnitConverter> _converter;
		Action _action;
		double _value;
};

#endif