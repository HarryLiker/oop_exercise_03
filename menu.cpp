#include <iostream>
#include <string>
#include <vector>

#include "figure.hpp"
#include "pentagon.hpp"
#include "hexagon.hpp"
#include "rhombus.hpp"
#include "menu.hpp"


int menu() {
    std::string figure_name;
    Rhombus *ptr_rhombus = nullptr;
    Pentagon *ptr_pentagon = nullptr;
    Hexagon *ptr_hexagon = nullptr;
    std::vector<Figure> figures;
    while(1) {
        std::cout << "Menu:\n";
        std::cout << "Rhombus\n";
        std::cout << "Pentagon\n";
        std::cout << "Hexagon\n";
        std::cin >> figure_name;
        if (figure_name == "Rhombus") {
            ptr_rhombus = new Rhombus();
            std::cout << "Write center coordinates: ";
            ptr_rhombus->GetCenter();
            std::cout << "Write side size: ";
            ptr_rhombus->GetSide();
            std::cout << "Write an angle: ";
            ptr_rhombus->GetAngle();
            ptr_rhombus->PrintCoordinates();
            std::cout << ptr_rhombus->Square();
        }
        if (figure_name == "Pentagon") {
            ptr_pentagon = new Pentagon();
            std::cout << "Write center coordinates: ";
            ptr_pentagon->GetCenter();
            std::cout << "Write side size: ";
            ptr_pentagon->GetSide();
            ptr_pentagon->PrintCoordinates();
            std::cout << ptr_pentagon->Square();
        }
        if (figure_name == "Hexagon") {
            ptr_hexagon = new Hexagon();
            std::cout << "Write center coordinates: ";
            ptr_hexagon->GetCenter();
            std::cout << "Write side size: ";
            ptr_hexagon->GetSide();
            ptr_hexagon->PrintCoordinates();
            std::cout << ptr_hexagon->Square();
        }
    }
    return 0; 
}