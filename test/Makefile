# minimal makefile for SE class
all: tinytest test

# main depends on all cpp files
tinytest: $(patsubst %.cpp,%.o,$(filter-out ../main.cpp, $(wildcard ../*.cpp)) convertertest.cpp)
	g++ -std=c++0x -Wall -o $@ $^

# a slightly ugly hack to make .o depend on .hpp if it exists
.SECONDEXPANSION:
%.o: %.cpp $$(wildcard $$*.hpp)
	g++ -std=c++0x -Wall -c -o $@ $<

test:
	./tinytest

clean:
	rm tinytest *.o

