#ifndef DECORATOR
#define DECORATOR 

#include "unitconverter.hpp"
#include <memory>

class Decorator : public UnitConverter
{
public:
	Decorator();
	Decorator(std::shared_ptr<UnitConverter> converter);

	double convert(const double inValue)const override;
    std::string toString() const override;
    void print() const override;
    void link(std::shared_ptr<UnitConverter> c);
	
private:
	std::shared_ptr<UnitConverter> myconverter_;
};

#endif