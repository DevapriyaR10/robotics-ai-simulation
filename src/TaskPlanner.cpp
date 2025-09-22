#include "TaskPlanner.h"
#include <iostream>

TaskPlanner::TaskPlanner(MotorController* m, SensorSimulator* s) 
    : motor(m), sensor(s) {}

void TaskPlanner::executeTask(const std::string& action) {
    if (action == "forward") motor->moveForward();
    else if (action == "backward") motor->moveBackward();
    else if (action == "left") motor->rotateLeft();
    else if (action == "right") motor->rotateRight();
    else motor->stop();
}
