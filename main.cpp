#include <memory>
#include <sstream>
#include "dollartoeuroconverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "fahrenheittocelsiusconverter.hpp"
#include "celsiustokelvinconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "eurotopoundsconverter.hpp"
#include "inchtocentimeterconverter.hpp"
#include "kelvintocelsiusconverter.hpp"
#include "kilometertomilesconverter.hpp"
#include "milestokilometerconverter.hpp"
#include "poundstoeuroconverter.hpp"
#include "centimetertoinchconverter.hpp"

int main(int argc, char* argv[])
{

  // ./main wird mit gezählt, deshalb 1 und 2
  std::string conversion = argv[1];
  std::string given_value = argv[2];


  //Convert string to double
  double value;
  std::stringstream s(given_value);
  s >> value;

  double converted = 0;

  //Test which conversion is the choosen

  if (conversion.compare("DollarToEuro") == 0)
  {
    auto myConverter = std::make_shared<DollarToEuroConverter>();
    converted = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Dollar to " << converted <<" Euros!"<<std::endl;
  }
  else if (conversion.compare("EuroToDollar") == 0)
  {
    auto myConverter = std::make_shared<EuroToDollarConverter>();
    converted = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Euros to " << converted <<" Dollar!"<<std::endl;
  }
  else if (conversion.compare("PoundsToEuro") == 0)
  {
    auto myConverter = std::make_shared<PoundsToEuroConverter>();
    converted = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Pounds to " << converted <<" Euros!"<<std::endl;
  }
  else if (conversion.compare("EuroToPounds") == 0)
  {
    auto myConverter = std::make_shared<EuroToPoundsConverter>();
    converted = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Euros to " << converted <<" Pounds!"<<std::endl;
  }
  else if (conversion.compare("CelsiusToFahrenheit") == 0)
  {
    auto myConverter = std::make_shared<CelsiusToFahrenheitConverter>();
    converted = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Celisus to " << converted <<" Fahrenheit!"<<std::endl;
  }
  else if (conversion.compare("FahrenheitToCelsius") == 0)
  {
    auto myConverter = std::make_shared<FahrenheitToCelsiusConverter>();
    converted = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Fahrenheit to " << converted <<" Celisus!"<<std::endl;
  }
  else if (conversion.compare("CelsiusToKelvin") == 0)
  {
    auto myConverter = std::make_shared<CelsiusToKelvinConverter>();
    converted = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Celisus to " << converted <<" Kelvin!"<<std::endl;
  }
  else if (conversion.compare("KelvinToCelsius") == 0)
  {
    auto myConverter = std::make_shared<KelvinToCelsiusConverter>();
    converted = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Kelvin to " << converted <<" Celisus!"<<std::endl;
  }
  else if (conversion.compare("MilesToKilometer") == 0)
  {
    auto myConverter = std::make_shared<MilesToKilometerConverter>();
    converted = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Miles to " << converted <<" Kilometer!"<<std::endl;
  }
  else if (conversion.compare("KilometerToMiles") == 0)
  {
    auto myConverter = std::make_shared<KilometerToMilesConverter>();
    converted = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Kilometer to " << converted <<" Miles!"<<std::endl;
  }
  else if (conversion.compare("CentimeterToInch") == 0)
  {
    auto myConverter = std::make_shared<CentimeterToInchConverter>();
    converted = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Centimeter to " << converted <<" Inch!"<<std::endl;
  }
  else if (conversion.compare("InchToCentimeter") == 0)
  {
    auto myConverter = std::make_shared<InchToCentimeterConverter>();
    converted = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Inch to " << converted <<" Centimeter!"<<std::endl;
  }



  /*
  auto myConverter = std::make_shared<DollarToEuroConverter>();
  double aLotOfDollars = 10000;
  double aLotOfEuros = myConverter->convert(aLotOfDollars);
  std::cout << myConverter->toString() << " has converted "<< aLotOfDollars << " Dollar to " << aLotOfEuros <<" Euros!"<<std::endl;
  return 0;
  */
}

