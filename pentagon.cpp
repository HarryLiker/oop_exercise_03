#include <iostream>
#include <cmath>
#include "pentagon.hpp"


#define PI 3.14159265

Pentagon::Pentagon(): Center_x(0), Center_y(0), SideLength(0), Figure() {}

Pentagon::Pentagon(double center_x, double center_y, double side): Center_x(center_x), Center_y(center_y), SideLength(side) {}

void Pentagon::PrintCoordinates() {
    double radius = sqrt( (SideLength * SideLength + 2 * cos(72 * PI / 180)) / 2 );
    for(int i = 0; i < 5; i++) {
        double x = Center_x + cos(72 * (i+1) * PI / 180) * radius;
        double y = Center_y + sin(72 * (i+1) * PI / 180) * radius;
        std::cout << "x" << i + 1 << " = " << x << "  ";
        std::cout << "y" << i + 1 << " = " << y << "\n";
    }
}

double Pentagon::Square() {
    double radius = sqrt( (SideLength * SideLength + 2 * cos(72 * PI / 180)) / 2 );
    return radius * radius * sin(72 * PI / 180) / 2;
}