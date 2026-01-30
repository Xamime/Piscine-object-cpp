#pragma once

#include <iostream>
#include "transmission.hpp"
#include "engine.hpp"
#include "brakes.hpp"
#include "steering.hpp"
#include "speedControl.hpp"

class Car
{
    Transmissions transmissions;
    Engine engine;
    SpeedControl speedControl;
    Steering steering;
    Brakes brakes;

    public :
    
    void start() {
        engine.start();
    };

    void stop() {
        engine.stop();
    };

    void accelerate(int speed) {
        speedControl.accelerate(speed);
    };

    void shift_gear_up() {
        transmissions.shift_gears_up();
    };

    void shift_gear_down() {
        transmissions.shift_gears_down();
    };

    void reverse() {
        transmissions.reverse();
    };

    void turn_wheel(int angle) {
        steering.turn_wheels(angle);
    };

    void straighten_wheels() {
        steering.straighten_wheels();
    };

    void apply_force_on_brakes(int force) {
        brakes.apply_force_on_brakes(force);
    };

    void apply_emergency_brakes() {
        brakes.apply_emergency_brakes();
    };
};