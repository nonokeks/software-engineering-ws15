#include <memory>
#include "dollartoeuroconverter.hpp"

int main(int argc, char* argv[])
{
  std::string conversion = argv[1];
  std::string value = argv[2];

  /*
   * TODO
   *
   * use desired conversion here
   *
  */

  auto myConverter = std::make_shared<DollarToEuroConverter>();
  double aLotOfDollars = 10000;
  double aLotOfEuros = myConverter->convert(aLotOfDollars);
  std::cout << myConverter->toString() << " has converted "<< aLotOfDollars << " Dollar to " << aLotOfEuros <<" Euros!"<<std::endl;
  return 0;
}

