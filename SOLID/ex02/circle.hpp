#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <iostream>
#include "shape.hpp"
#include <cmath>

class Circle : public Shape {
    double radius;

    public:

        Circle(double radius) : radius(radius) {}
        virtual double calculate_area() const {
            return M_PI * radius * radius;
        };
        virtual double calculate_perimeter() const {
            return 2 * M_PI * radius;
        };

};

#endif