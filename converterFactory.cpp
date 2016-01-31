#include "converterFactory.hpp"

ConverterFactory::ConverterFactory(){}
//ConverterFactory::~ConverterFactory(){}


ConverterFactory* ConverterFactory::instance_ = nullptr;

//Singelton
ConverterFactory* ConverterFactory::instance(){
	if(instance_ == nullptr){
		instance_ = new ConverterFactory();
	}
	return instance_;
}

UnitConverter* ConverterFactory::create(std::string const& name) const{
	//Wenn Converter exisitiert
	if (converter_.find(name) != converter_.end())
	{
		//für Prototype clone Methode
		return converter_.find(name)->second->clone();
	}
	else
	{
		throw ConverterError(name);
		return nullptr;
	}
}