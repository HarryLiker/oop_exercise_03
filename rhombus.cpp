#include <iostream>
#include <cmath>
#include "rhombus.hpp"

#define PI 3.14159265

Rhombus::Rhombus(): Figure("rhombus"), Center_x(0), Center_y(0), SideLength(0), Angle(40) {}

void Rhombus::GetCenter() {
    std::cin >> Center_x >> Center_y;
}

void Rhombus::GetSide() {
    std::cin >> SideLength;
}

void Rhombus::GetAngle() {
    while(1) {
        std::cin >> Angle;
        if(Angle >= 180 || Angle <= 0) {
            std::cout << "Entered invalid angle!" <<"\n";
            std::cout << "Please, re-enter the angle: ";
        }
        else {
            break;
        }
    }
}

void Rhombus::PrintCoordinates() {
    float angle = Angle / 2;
    float radius_x = cos(angle * PI / 180) * SideLength;
    float radius_y = sin(angle * PI / 180) * SideLength;

    for (int i = 0; i < 4; i++) {
        if(i % 2 == 0) {
            std::cout << "x" << i + 1 << " = " << Center_x + radius_x << "  ";
            std::cout << "y" << i + 1 << " = " << 0 << "\n";
            radius_x *= -1;
        }
        else {
            std::cout << "x" << i + 1 << " = " << 0 << "  ";
            std::cout << "y" << i + 1 << " = " << Center_y + radius_y << "\n";
            radius_y *= -1;
        }
    }
}

float Rhombus::Square() {
    return round(cos(Angle * PI / 360) * sin(Angle * PI / 360) * SideLength * SideLength * 2 * 10000) / 10000;
}
