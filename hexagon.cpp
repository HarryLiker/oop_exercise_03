#include "hexagon.hpp"
#include <iostream>
#include <cmath>

#define PI 3.14159265

Hexagon::Hexagon(): Figure("hexagon"), Center_x(0), Center_y(0), SideLength(0) {}

Hexagon::Hexagon(double center_x, double center_y, double side): Figure("hexagon"), Center_x(center_x), Center_y(center_y), SideLength(side) {}

void Hexagon::PrintCoordinates() {
    for (int i = 0; i < 6; i++) {
        double x = Center_x + cos(60 * (i+1) * PI / 180) * SideLength;
        double y = Center_y + cos(60 * (i+1) * PI / 180) * SideLength;
        std::cout << "x" << i + 1 << " = " << x << "  ";
        std::cout << "y" << i + 1 << " = " << y << "\n";
    }
}

double Hexagon::Square() {
    return 3 * sqrt(3) * SideLength * SideLength / 2;
}