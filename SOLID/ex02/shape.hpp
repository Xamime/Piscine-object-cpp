#ifndef Shape_HPP
#define Shape_HPP

#include <iostream>

class Shape {

    public:

        virtual double calculate_area() const = 0;
        virtual double calculate_perimeter() const = 0;
        virtual ~Shape(){};
};

#endif