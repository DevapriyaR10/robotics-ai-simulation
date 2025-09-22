CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = main.cpp MotorController.cpp SensorSimulator.cpp TaskPlanner.cpp GenerativeAI.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = robotics_ai_sim

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
