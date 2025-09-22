#ifndef TASKPLANNER_H
#define TASKPLANNER_H

#include <string>
#include "MotorController.h"
#include "SensorSimulator.h"

class TaskPlanner {
private:
    MotorController* motor;
    SensorSimulator* sensor;

public:
    TaskPlanner(MotorController* m, SensorSimulator* s);
    void executeTask(const std::string& action);
};

#endif
