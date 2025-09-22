#include "SensorSimulator.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

bool SensorSimulator::detectObstacle() {
    srand(time(0) + rand());  
    int r = rand() % 2;  // 50% chance of obstacle
    if (r == 1) {
        std::cout << "[Sensor] Obstacle detected!\n";
        return true;
    } else {
        std::cout << "[Sensor] Path is clear.\n";
        return false;
    }
}
