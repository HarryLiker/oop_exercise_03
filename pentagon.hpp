#pragma once 

#include <iostream>
#include "figure.hpp"

class Pentagon: public Figure {
private:
    double Center_x;
    double Center_y;
    double SideLength;

public:
    Pentagon();
    Pentagon(double center_x, double center_y, double side);
    void PrintCoordinates() override;

    double Square();

};