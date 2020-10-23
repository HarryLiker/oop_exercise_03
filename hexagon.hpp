#pragma once

#include "figure.hpp"

class Hexagon: public Figure { // Сторона шестиугольника равна расстоянию от его центра до вершины
private:
    double Center_x;
    double Center_y;
    double SideLength;

public:

    Hexagon();

    Hexagon(double center_x, double center_y, double side);

    void PrintCoordinates() override;

    double Square() override;

    virtual ~Hexagon();
};