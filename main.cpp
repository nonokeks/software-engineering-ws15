#include <memory>
#include <sstream>
#include <algorithm>
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
#include "converterFactory.hpp"
#include "decorator.hpp"
#include "inversionconverter.hpp"
#include "command.hpp"

int main(int argc, char* argv[])
{
  
  //std::string conversion = argv[1];
  std::string given_value = argv[1];
  
  //Convert string to double
  double value;
  std::stringstream s(given_value);
  s >> value;

  /*
  std::deque<Command> commands;

  std::string conversion = " ";
  std::string value " ";
  bool invert " ";
  auto factory = ConverterFactory::instance();

  std::cout << "Exampels: " << std::endl;
  std::cout << "dollartoeuro eurotopounds 10 " << std::endl;
  std::cout << "[any lenghtconverter] [value] " << std::endl;
  std::cout << "[any currencyconverter] [value] " << std::endl;
  std::cout << "[any temperatureconverter] [value] " << std::endl;
  std::cout << "invert dollartoeuro 10 " << std::endl;
  std::cout << "invert [any currencyconverter] [value] " << std::endl;
  std::cout << "invert [any currencyconverter] [value] " << std::endl;

  for (std::string line; std::getline(std::cin, line);) {
    //std::cout << line << std::endl;
    std::string temp;
    while (line.good()){

      line >> temp;
      if(temp.compare("invert")){
        invert = true;
      }




    }

    invert = false;

  }
  */



  /*
  std::transform(conversion.begin(), conversion.end(), conversion.begin(), ::tolower);

  //double converted = 0;

  auto factory = ConverterFactory::instance();
  auto converter = factory->create(conversion);

  if (converter != nullptr)
  {
      std::cout << converter->toString() << " has converted "<< value << " to " << converter->convert(value) <<"!"<<std::endl; 
  }
  else{
    std::cout << "Kein gültiger Converter" << std::endl;
  }
  */

  
  auto converter = std::make_shared<MilesToKilometerConverter>();
  double w1 = converter->convert(value);
  std::cout << "M2km " << w1 << std::endl;

  std::shared_ptr<LengthConverter> c = std::make_shared<KilometerToMilesConverter>();
  auto converter2 = std::make_shared<MilesToKilometerConverter>(c);
  double w2 = converter2->convert(value);
  std::cout << "M2km 2 km2M "<< w2 << std::endl;

  auto converter3 = std::make_shared<FahrenheitToCelsiusConverter>(std::make_shared<CelsiusToKelvinConverter>());
  double w3 = converter3->convert(value);
  std::cout << "F2C 2 C2K " << w3 << std::endl;

  auto converter4 = std::make_shared<InversionConverter>(converter3);
  double w4 = converter4->convert(value);
  std::cout << "M2km invert " << w4 << std::endl;
  
  
  return 1;
}