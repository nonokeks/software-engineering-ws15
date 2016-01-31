#ifndef CONVERTERERROR
#define CONVERTERERROR 

#include <iostream>

class ConverterError
{
public:
	ConverterError(std::string converter);
	~ConverterError();
	void throwExeption();

private:
	std::string converter_;
};

#endif