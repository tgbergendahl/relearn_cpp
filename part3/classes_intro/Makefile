CXX = g++
CXXFLAGS = -Wall -std=c++20 -g

TARGET = imports.out
SOURCES = main.cpp player.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET) run

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJECTS)

.PHONY: all run clean