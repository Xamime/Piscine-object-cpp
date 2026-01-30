#pragma once

#include <iostream>

class Brakes {
    public:
    void apply_force_on_brakes(int force) {
        std::cout << "apply " << force << " to the brakes\n";
    };

    void apply_emergency_brakes() {
        std::cout << "applies the brakes with maximum force for an emergency stop\n";
    };
};