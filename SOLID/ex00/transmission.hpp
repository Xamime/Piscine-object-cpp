#pragma once

#include <iostream>

class Transmissions {
    
    public:
    void shift_gears_up() {
        std::cout << " shifts up to the next gear\n";
    };

    void shift_gears_down() {
        std::cout << " shifts down to the previous gear\n";
    };

    void reverse() {
        std::cout << " puts the transmission in reverse gear\n";
    };
};