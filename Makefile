# Compiler and flags
CXX = g++
CXXFLAGS = -g -Wall

# Executable name
TARGET = main.exe

# Source files
SRCS = main.cpp player.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default rule
all: $(TARGET)

# Link object files to make executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cpp to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean rule
clean:
	$(RM) $(OBJS) $(TARGET)

.PHONY: all clean
