
#include "car.hpp"
using namespace std;

int main()
{
    Car car;
    cout << "ENGINE\n";
    car.start();
    car.stop();

    cout << "\nSpeedcontrol\n";
    car.accelerate(5);

    cout << "\nTransmissions\n";
    car.shift_gear_up();
    car.shift_gear_down();
    car.reverse();

    cout << "\nSteering\n";
    car.turn_wheel(2);
    car.straighten_wheels();

    cout << "\nBrakes\n";
    car.apply_force_on_brakes(4);
    car.apply_emergency_brakes();


    return 0;
}