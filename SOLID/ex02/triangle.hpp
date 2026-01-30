#ifndef Triangle_HPP
#define Triangle_HPP

#include <iostream>
#include "shape.hpp"
#include <cmath>

class Triangle : public Shape {

    double a, b, c;

    public:

        Triangle(double a, double b, double c) : a(a), b(b), c(c) {}

        virtual double calculate_perimeter() const {
            return a + b + c;
        }

        virtual double calculate_area() const {
            double s = calculate_perimeter() / 2;
            return std::sqrt(s * (s - a) * (s - b) * (s - c));
        }
};

#endif