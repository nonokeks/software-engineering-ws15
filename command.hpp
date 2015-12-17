#ifndef COMMAND
#define COMMAND

#include "unitconverter.hpp"
#include "converterFactory.hpp"
#include <memory>

class Command {
	public:
		typedef double (UnitConverter::*Action)(const double) const;
		Command(std::string const converter, Action const action, double const value);
		Command();
		
		double getValue() const;
		
		void execute() const;


	private:
		std::string _converter;
		std::shared_ptr<UnitConverter> _converterptr;
		Action _action;
		double _value;
};

#endif