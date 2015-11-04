# minimal makefile for SE class
all: main test

# main depends on all cpp files
main: $(patsubst %.cpp,%.o,$(wildcard *.cpp))
	g++ -std=c++0x -Wall -o $@ $^

# a slightly ugly hack to make .o depend on .hpp if it exists
.SECONDEXPANSION:
%.o: %.cpp $$(wildcard $$*.hpp)
	g++ -std=c++0x -Wall -c -o $@ $<

test:
	./main DollarToEuro 10000
	./main EuroToDollar 10000
	./main PoundsToEuro 222
	./main EuroToPounds	555.8
	./main FahrenheitToCelsius 88.78
	./main CelsiusToFahrenheit -11
	./main KelvinToCelsius 235
	./main CelsiusToKelvin 36.8
	./main MilesToKilometer 726.987
	./main KilometerToMiles 435.7
	./main InchToCentimeter 44.3
	./main CentimeterToInch 12.7

clean:
	rm main *.o

