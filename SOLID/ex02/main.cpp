#include <iostream>
#include "triangle.hpp"
#include "circle.hpp"
#include "rectangle.hpp"

using namespace std;

int main() {
    Shape* shapes[3];

    shapes[0] = new Triangle(3, 4, 5);
    shapes[1] = new Rectangle(4, 6);
    shapes[2] = new Circle(5);

    for (int i = 0; i < 3; i++) {
        std::cout << "Perimetre: " << shapes[i]->calculate_perimeter() << std::endl;
        std::cout << "Aire: " << shapes[i]->calculate_area() << std::endl << std::endl;
        delete shapes[i];
    }

    return 0;
}