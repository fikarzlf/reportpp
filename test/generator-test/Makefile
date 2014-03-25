INCLUDE=../../include
CXXFLAGS=-std=c++11 -I $(INCLUDE) -O0 -g -Wall
LDFLAGS=-lhpdf

test: ../../src/ReportGen.o main.o
	$(CXX) $^ $(LDFLAGS) -o test

.PHONY: clean
clean:
	rm -f main.o test