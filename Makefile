#Latiful Kabir
#Makefile for ReadBinary version:7 
#Date:05.09.14



CXX=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=$(wildcard src/*.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=asymmetry
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	       $(CXX) $(LDFLAGS) $(OBJECTS) -o $@
%.o:%.cpp
	$(CXX) $(CFLAGS) $< -o $@
	
clear:
	rm -f src/*.o

clean:
	rm -f src/*.o $(EXECUTABLE)





