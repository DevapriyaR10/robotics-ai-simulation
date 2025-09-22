#include "MotorController.h"
#include <iostream>

void MotorController::moveForward() {
    std::cout << "[Motor] Moving forward...\n";
}

void MotorController::moveBackward() {
    std::cout << "[Motor] Moving backward...\n";
}

void MotorController::rotateLeft() {
    std::cout << "[Motor] Rotating left...\n";
}

void MotorController::rotateRight() {
    std::cout << "[Motor] Rotating right...\n";
}

void MotorController::stop() {
    std::cout << "[Motor] Stopping...\n";
}
