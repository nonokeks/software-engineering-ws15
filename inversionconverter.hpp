#ifndef INVERSIONCONVERTER
#define INVERSIONCONVERTER 

#include "decorator.hpp"
#include <memory>

class InversionConverter : public Decorator
{
public:
	InversionConverter();
	InversionConverter(std::shared_ptr<UnitConverter> converter);
	~InversionConverter();

	double convert(const double inValue)const override;
    std::string toString() const override;
    void print() const override;
    UnitConverter* clone() const override;
    //void link(UnitConverter* c) const override;
private:
	std::shared_ptr<UnitConverter> c_;
};

#endif