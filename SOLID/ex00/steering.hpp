#pragma once

#include <iostream>

class Steering {
    
    public:
    void turn_wheels(int angle) {
        std::cout << "turns the wheels by " << angle << " degrees\n";
    };
    void straighten_wheels() {
        std::cout << "returns the wheels to a straight-ahead position\n";
    };
};