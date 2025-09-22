#ifndef MOTORCONTROLLER_H
#define MOTORCONTROLLER_H

#include <string>

class MotorController {
public:
    void moveForward();
    void moveBackward();
    void rotateLeft();
    void rotateRight();
    void stop();
};

#endif
