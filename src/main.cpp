
```cpp
#include <iostream>
#include "MotorController.h"
#include "SensorSimulator.h"
#include "TaskPlanner.h"
#include "GenerativeAI.h"

int main() {
    MotorController motor;
    SensorSimulator sensor;
    TaskPlanner planner(&motor, &sensor);
    GenerativeAI ai;

    std::cout << "=== Robotics + AI Simulation Start ===\n";

    for (int step = 0; step < 5; step++) {
        bool obstacle = sensor.detectObstacle();

        if (obstacle) {
            std::string aiSuggestion = ai.suggestNextMove("obstacle");
            planner.executeTask(aiSuggestion);
        } else {
            std::string aiSuggestion = ai.suggestNextMove("clear");
            planner.executeTask(aiSuggestion);
        }
    }

    std::cout << "=== Simulation End ===\n";
    return 0;
}
