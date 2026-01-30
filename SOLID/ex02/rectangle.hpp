#ifndef Rectangle_HPP
#define Rectangle_HPP

#include <iostream>
#include "shape.hpp"

class Rectangle : public Shape {
    double width;
    double height;

    public:

        Rectangle(double width, double height) : width(width), height(height) {}
        virtual double calculate_area() const {
            return width * height;
        }
        virtual double calculate_perimeter() const {
            return 2 * (width + height);
        }
};

#endif