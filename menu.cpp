#include <iostream>
#include <vector>

#include "figure.hpp"

int menu() {
    char line[16];
    std::vector<Figure> figures;
    while(1) {
        std::cout << "Menu:\n";
        std::cout << "Rhombus\n";
        std::cout << "Pentagon\n";
        std::cout << "Hexagon\n";
    }
    std::cin >> line;
    if (line == "Rhombus") {
        std::cout << "str is Rhombus";
    }
    if (line == "Pentagon") {

    }
    if (line == "Hexagon") {

    }


    
}