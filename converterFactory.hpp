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

typedef std::pair<std::string, std::shared_ptr(UnitConverter)> p;

class ConverterFactory
{
public:
	
	//Singelton
	ConverterFactory* get_instance();

	UnitConverter* create(std::string const& name) const;



private:
	ConverterFactory();
	~ConverterFactory();

	static ConverterFactory *instance_ = nullptr;

	std::map<std::string, std::shared_ptr(UnitConverter)> converter_ =
		{
			p("celsiustofahrenheit", std::make_shared<CelsiusToFahrenheitConverter>()),
			p("fahrenheittocelsius", std::make_shared<FahrenheitToCelsiusConverter>()),
			p("celsiustokelvin", 	 std::make_shared<CelsiusToKelvinConverter>()),
			p("kelvintocelsius", 	 std::make_shared<KelvinToCelsiusConverter>()),
			p("centimetertoinch", 	 std::make_shared<CentimeterToInchConverter>()),
			p("inchtocentimeter", 	 std::make_shared<InchToCentimeterConverter>()),
			p("kilometertomiles",  	 std::make_shared<KilometerToMilesConverter>()),
			p("milestokilometer", 	 std::make_shared<MilesToKilometerConverter>()),
			p("eurotodollar", 		 std::make_shared<EuroToDollarConverter>()),
			p("eurotopound", 		 std::make_shared<EuroToPoundsConverter>()),
			p("poundstoeuro", 		 std::make_shared<PoundsToEuroConverter>()),
			p("dollartoeuro", 		 std::make_shared<DollarToEuroConverter>()),
		};
};


#endif