#ifndef VALUEERROR
#define VALUEERROR 

#include <iostream>

class ValueError
{
public:
	ValueError(double value, std::string converter);
	~ValueError();
	void throwExeption();

private:
	double value_;
	std::string converter_;
};

#endif