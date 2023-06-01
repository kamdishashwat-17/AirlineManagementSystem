# Makefile for Airline Management System

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Directories
SRC_DIR = src
BIN_DIR = bin

# Source files
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%.o,$(SOURCES))

# Header files
HEADERS = $(wildcard $(SRC_DIR)/*.h)

# Executable name
EXECUTABLE = $(BIN_DIR)/airline

# Default target
all: $(EXECUTABLE)

# Compile and link the source code files
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compile individual source code files
$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean the compiled files and the executable
clean:
	rm -f $(BIN_DIR)/*.o $(EXECUTABLE)

# Run the executable
run:
	$(EXECUTABLE)
