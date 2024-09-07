# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Iinclude -Wall -Wextra

# Source and include directories
SRC_DIR = src
INCLUDE_DIR = include

# Find all .cpp files in the src directory
SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Generate object files from source files
OBJS = $(SRCS:.cpp=.o)

# Output executable
TARGET = main

# Default target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)
	rm -f $(OBJS)

# Compile .cpp files to .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean