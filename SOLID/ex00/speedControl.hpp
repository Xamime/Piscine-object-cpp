#pragma once

#include <iostream>

class SpeedControl {

    public :
    void accelerate(int speed) {
        std::cout << "speed is now at " << speed << std::endl;
    };
};