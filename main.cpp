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

int main(int argc, char* argv[])
{
  
  //std::string conversion = argv[1];
  std::string given_value = argv[1];
  
  //Convert string to double
  double value;
  std::stringstream s(given_value);
  s >> value;
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

  std::shared_ptr<UnitConverter> converter = std::make_shared<MilesToKilometerConverter>();
  double w1 = converter->convert(value);
  std::cout << w1 << std::endl;
  converter = std::make_shared<InchToCentimeterConverter>(converter);
  double w2 = converter->convert(value);

  std::cout << w2 << std::endl;
  return 1;
}