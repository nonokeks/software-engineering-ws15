#ifndef CONVERTER_FACTORY
#define CONVERTER_FACTORY

#include <map> 
#include <memory>
#include <iostream>

#include "celsiustofahrenheitconverter.hpp"
#include "fahrenheittocelsiusconverter.hpp"
#include "celsiustokelvinconverter.hpp"
#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "eurotopoundsconverter.hpp"
#include "inchtocentimeterconverter.hpp"
#include "kelvintocelsiusconverter.hpp"
#include "kilometertomilesconverter.hpp"
#include "milestokilometerconverter.hpp"
#include "poundstoeuroconverter.hpp"
#include "centimetertoinchconverter.hpp"


class ConverterFactory
{
public:
	
	//Singleton
	static ConverterFactory* instance();

	UnitConverter* create(std::string const& name) const;



private:
	ConverterFactory();
	//~ConverterFactory();

	static ConverterFactory* instance_;

	std::map<std::string, std::shared_ptr<UnitConverter>> converter_ =
		{
			std::make_pair("celsiustofahrenheit", std::make_shared<CelsiusToFahrenheitConverter>()),
			std::make_pair("fahrenheittocelsius", std::make_shared<FahrenheitToCelsiusConverter>()),
			std::make_pair("celsiustokelvin", 	  std::make_shared<CelsiusToKelvinConverter>()),
			std::make_pair("kelvintocelsius", 	  std::make_shared<KelvinToCelsiusConverter>()),
			std::make_pair("centimetertoinch", 	  std::make_shared<CentimeterToInchConverter>()),
			std::make_pair("inchtocentimeter", 	  std::make_shared<InchToCentimeterConverter>()),
			std::make_pair("kilometertomiles",    std::make_shared<KilometerToMilesConverter>()),
			std::make_pair("milestokilometer", 	  std::make_shared<MilesToKilometerConverter>()),
			std::make_pair("eurotodollar", 		  std::make_shared<EuroToDollarConverter>()),
			std::make_pair("eurotopounds", 		  std::make_shared<EuroToPoundsConverter>()),
			std::make_pair("poundstoeuro", 		  std::make_shared<PoundsToEuroConverter>()),
			std::make_pair("dollartoeuro", 		  std::make_shared<DollarToEuroConverter>()),
		};
};


#endif