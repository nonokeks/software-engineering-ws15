#include "converterFactory.hpp"

//Singelton
ConverterFactory* ConverterFactory::get_instance(){
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
		return nullptr;
	}
}