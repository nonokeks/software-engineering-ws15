cmake_minimum_required(VERSION 2.8)
project(Converter)
set(CMAKE_CXX_FLAGS "-std=c++0x")

#Alle Datein mit Endung cpp in eine Variable (Quelle für Main)
file(GLOB srcs "*.cpp")
add_executable(main ${srcs})

#Tinytest
include_directories(${CMAKE_SOURCE_DIR}/tests)

file(GLOB testsources "tests/*.cpp")
set(src unitconverter.cpp currencyconverter.cpp lengthconverter.cpp temperatureconverter.cpp converterFactory.cpp dollartoeuroconverter.cpp celsiustofahrenheitconverter.cpp fahrenheittocelsiusconverter.cpp celsiustokelvinconverter.cpp eurotodollarconverter.cpp eurotopoundsconverter.cpp inchtocentimeterconverter.cpp kelvintocelsiusconverter.cpp kilometertomilesconverter.cpp milestokilometerconverter.cpp poundstoeuroconverter.cpp centimetertoinchconverter.cpp)

add_executable(tinytest ${testsources} ${src})

#execute with make test or ctest
enable_testing()
add_test(testingTinytest tinytest)