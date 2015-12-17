#include "unitconverter.hpp"

UnitConverter::UnitConverter():base_{nullptr}
{
}

UnitConverter::UnitConverter(std::shared_ptr<UnitConverter> converter):base_{converter}{}