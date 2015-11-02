#include <stdlib.h>
#include <stdio.h>
#include <memory>

#include "tinytest.h"
//Converter
#include "../celsiustofahrenheitconverter.hpp"
#include "../fahrenheittocelsiusconverter.hpp"
#include "../celsiustokelvinconverter.hpp"
#include "../dollartoeuroconverter.hpp"
#include "../eurotodollarconverter.hpp"
#include "../eurotopoundsconverter.hpp"
#include "../inchtocentimeterconverter.hpp"
#include "../kelvintocelsiusconverter.hpp"
#include "../kilometertomilesconverter.hpp"
#include "../milestokilometerconverter.hpp"
#include "../poundstoeuroconverter.hpp"
#include "../centimetertoinchconverter.hpp"

//celsius to fahrenheit
int t1()
{
  auto celsiustofahrenheit = std::make_shared<CelsiusToFahrenheitConverter>();
  double c = 36.5;
  double f = celsiustofahrenheit->convert(c);
  TINYTEST_EQUAL_EPSILON(97.7, f);
  
  c = 0.0;
  f = celsiustofahrenheit->convert(c);
  TINYTEST_EQUAL_EPSILON(32.0, f);
  
  
  c = 12.34567;
  f = celsiustofahrenheit->convert(c);
  TINYTEST_EQUAL_EPSILON(54.222206, f);
  
  
  return 1; // Always return a value different than 0 at test end.
}

//fahrenheit to celsius
int t2()
{
  auto fahrenheittocelsius = std::make_shared<FahrenheitToCelsiusConverter>();
  double f = 97.7;
  double c = fahrenheittocelsius->convert(f);
  TINYTEST_EQUAL_EPSILON(36.5, c);
  
  f = 0.0;
  c = fahrenheittocelsius->convert(f);
  TINYTEST_EQUAL_EPSILON(-17.7777777778, c)
  
  
  
  f = 123.4567;
  c = fahrenheittocelsius->convert(f);
  TINYTEST_EQUAL_EPSILON( 50.8092777778, c)
  
  
  return 1; // Always return a value different than 0 at test end.
}

//celsius to kelvin
int t3()
{
  auto celsiustokelvin = std::make_shared<CelsiusToKelvinConverter>();
  double c = 36.5;
  double k = celsiustokelvin->convert(c);
  TINYTEST_EQUAL_EPSILON(309.65, k);
  
  c = 0.0;
  k = celsiustokelvin->convert(c);
  TINYTEST_EQUAL_EPSILON(273.15, k);
  
  
  c = 12.34567;
  k = celsiustokelvin->convert(c);
  TINYTEST_EQUAL_EPSILON(285.49567, k);
  
  
  return 1; // Always return a value different than 0 at test end.
}

//kelvin to celsius
int t4()
{
  auto kelvintocelsius = std::make_shared<KelvinToCelsiusConverter>();
  double k = 309.65;
  double c = kelvintocelsius->convert(k);
  TINYTEST_EQUAL_EPSILON(36.5, c);
  
  k = 0.0;
  c = kelvintocelsius->convert(k);
  TINYTEST_EQUAL_EPSILON(-273.15, c);
  
  
  k = 123.4567;
  c = kelvintocelsius->convert(k);
  TINYTEST_EQUAL_EPSILON(-149.6933, c);
  
  
  return 1; // Always return a value different than 0 at test end.
}

//centimeter to inch
int t5()
{
  auto centimetertoinch = std::make_shared<CentimeterToInchConverter>();
  double c = 15.0;
  double i = centimetertoinch->convert(c);
  TINYTEST_EQUAL_EPSILON(5.905515, i); 
  
  c = 0.0;
  i = centimetertoinch->convert(c);
  TINYTEST_EQUAL_EPSILON(0.0, i);
  
  
  c = 12.34567;
  i = centimetertoinch->convert(c);
  TINYTEST_EQUAL_EPSILON(4.860502647, i);
  
  
  return 1; // Always return a value different than 0 at test end.
}

//inch to centimeter
int t6()
{
  auto inchtocentimeter = std::make_shared<InchToCentimeterConverter>();
  double i = 15;
  double c = inchtocentimeter->convert(i);
  TINYTEST_EQUAL_EPSILON(38.1, c);
  
  i = 0.0;
  c = inchtocentimeter->convert(i);
  TINYTEST_EQUAL_EPSILON(0.0, c);
  
  
  i = 12.34567;
  c = inchtocentimeter->convert(i);
  TINYTEST_EQUAL_EPSILON(31.3580018, c);
  
  
  return 1; // Always return a value different than 0 at test end.
}

//kilometer to miles
int t7()
{
  auto kilometertomiles = std::make_shared<KilometerToMilesConverter>();
  double k = 15.0;
  double m = kilometertomiles->convert(k);
  TINYTEST_EQUAL_EPSILON(9.32055, m); 
  
  k = 0.0;
  m = kilometertomiles->convert(k);
  TINYTEST_EQUAL_EPSILON(0.0,m);
  
  
  k = 12.34849;
  m = kilometertomiles->convert(k);
  TINYTEST_EQUAL_EPSILON(7.67298123,m);
  
  
  return 1; // Always return a value different than 0 at test end.
}

//miles to kilometer
int t8()
{
  auto milestokilometer = std::make_shared<MilesToKilometerConverter>();
  double m = 15;
  double k = milestokilometer->convert(m);
  TINYTEST_EQUAL_EPSILON(24.135, k);
  
  m = 0.0;
  k = milestokilometer->convert(m);
  TINYTEST_EQUAL_EPSILON(0.0, k);
  
  
  m = 12.34567;
  k = milestokilometer->convert(m);
  TINYTEST_EQUAL_EPSILON(19.86418303, k);
  
  
  return 1; // Always return a value different than 0 at test end.
}

//euro to dollar
int t9()
{
  auto eurotodollar = std::make_shared<EuroToDollarConverter>();
  double e = 15.0;
  double d = eurotodollar->convert(e);
  TINYTEST_EQUAL_EPSILON(16.5135, d); 
  
  e = 0.0;
  d = eurotodollar->convert(e);
  TINYTEST_EQUAL_EPSILON(0.0, d);
  
  
  e = 12.34567;
  d = eurotodollar->convert(e);
  TINYTEST_EQUAL_EPSILON(13.591348103, d);
  
  
  return 1; // Always return a value different than 0 at test end.
}

//euro to pound
int t10()
{
  auto eurotopound = std::make_shared<EuroToPoundsConverter>();
  
  double e = 15;
  double p = eurotopound->convert(e);
  TINYTEST_EQUAL_EPSILON(10.68281796, p);
  
  
  e = 0.0;
  p = eurotopound->convert(e);
  TINYTEST_EQUAL_EPSILON(0.0, p);
  
  
  e = 12.34567;
  p = eurotopound->convert(e);
  TINYTEST_EQUAL_EPSILON(8.7924363469, p);
  
  
  return 1; // Always return a value different than 0 at test end.
}

//pound to euro
int t11()
{
  auto poundstoeuro = std::make_shared<PoundsToEuroConverter>();
  
  double p = 15;
  double e = poundstoeuro->convert(p);
  TINYTEST_EQUAL_EPSILON(21.0618585, e);
  
  
  p = 0.0;
  e = poundstoeuro->convert(p);
  TINYTEST_EQUAL_EPSILON(0.0, e);
  
  
  p = 12.34567;
  e = poundstoeuro->convert(p);
  TINYTEST_EQUAL_EPSILON(17.3348503085, e);
  
  
  return 1; // Always return a value different than 0 at test end.
}

TINYTEST_START_SUITE(Converter);
  TINYTEST_ADD_TEST(t1);
  TINYTEST_ADD_TEST(t2);
  TINYTEST_ADD_TEST(t3);
  TINYTEST_ADD_TEST(t4);
  TINYTEST_ADD_TEST(t5);
  TINYTEST_ADD_TEST(t6);
  TINYTEST_ADD_TEST(t7);
  TINYTEST_ADD_TEST(t8);
  TINYTEST_ADD_TEST(t9);
  TINYTEST_ADD_TEST(t10);
  TINYTEST_ADD_TEST(t11);
TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(Converter);