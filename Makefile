CXX := g++
CXXFLAGS := -Wall -Werror -Wextra -pedantic -std=c++23 -O3 -march=native -Wno-unused-parameter
LDFLAGS := -linput -ludev

TARGET := kl

SRC := main.cpp helper.cpp
OBJ := $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

format:
	clang-format -style=Mozilla -i *.cpp *.h

clean:
	rm -f $(TARGET) $(OBJ) keystrokes.txt
