#include <memory>
#include <sstream>
#include <algorithm>
#include <deque>
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
#include "convertererror.hpp"
#include "valueerror.hpp"

int main(int argc, char* argv[])
{
  
  std::deque<Command> commands;

  std::string conversion = " ";
  std::string value_s = " ";
  //bool invert " ";

  std::cout << "Examples: " << std::endl;
  std::cout << "dollartoeuro 10 " << std::endl;
  std::cout << "[converter] [value]" << std::endl;

  try{

    for (std::string line; std::getline(std::cin, line);) {
      //std::cout << line << std::endl;
      
      std::stringstream s;
      s << line;
      s >> conversion;

      s << line;
      s >> value_s;

      double value = std::stod(value_s);

      Command temp(conversion, &UnitConverter::convert, value);
      commands.push_back(temp);

    }

    for (unsigned i = 0; i < commands.size(); ++i)
    {
      commands[i].execute();
    }
  }
  catch(ConverterError& error){ //converter
    error.throwExeption();    
  }
  catch(ValueError& error){ //value
    error.throwExeption();
  }
  catch(std::invalid_argument& error){ 
    std::cout << "Error: Wrong number or type of arguments!" << std::endl;
  }
  

  



  //Decorator-Pattern
  /*
  //std::string conversion = argv[1];
  std::string given_value = argv[1];
  
  //Convert string to double
  double value;
  std::stringstream s(given_value);
  s >> value;*/
  /*
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
  */
  
  return 0;
}