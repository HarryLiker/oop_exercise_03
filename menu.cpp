#include <iostream>
#include <string>
#include <vector>

#include "figure.hpp"
#include "pentagon.hpp"
#include "hexagon.hpp"
#include "rhombus.hpp"
#include "menu.hpp"


Figure * enter_in_figure(std::string figure) {
    Figure *ptr_figure = nullptr;
    if (figure == "rhombus") {
        Rhombus *ptr_rhombus = new Rhombus();
        std::cout << "Write center coordinates: ";
        ptr_rhombus->GetCenter();
        std::cout << "Write side size: ";
        ptr_rhombus->GetSide();
        std::cout << "Write an angle: ";
        ptr_rhombus->GetAngle();
        ptr_figure = (Figure*)ptr_rhombus;
        //delete ptr_rhombus;
    }
    else if (figure == "pentagon") {
        Pentagon *ptr_pentagon = new Pentagon();
        std::cout << "Write center coordinates: ";
        ptr_pentagon->GetCenter();
        std::cout << "Write side size: ";
        ptr_pentagon->GetSide();
        ptr_figure = (Figure*)ptr_pentagon;
        //delete ptr_pentagon;
    }
    else if (figure == "hexagon") {
        Hexagon *ptr_hexagon = new Hexagon();
        std::cout << "Write center coordinates: ";
        ptr_hexagon->GetCenter();
        std::cout << "Write side size: ";
        ptr_hexagon->GetSide();
        ptr_figure = (Figure*)ptr_hexagon;
        //delete ptr_hexagon;
    }
    return ptr_figure;
}

Figure * figure_enter() {
    std::string figure_name;
    std::cout << "Enter a name of figure (Possible names: rhombus, pentagon, hexagon): ";
    std::cin >> figure_name;
    while (figure_name != "rhombus" && figure_name != "pentagon" && figure_name != "hexagon") {
        std::cout << "Entered invalid figure name\n";
        std::cout << "Please, enter figure name: ";
        std::cin >> figure_name;
    }
    return enter_in_figure(figure_name);
}

int menu() {
    std::vector<Figure*> figures;
    while(1) {
        int value;
        std::cout << "Menu:\n";
        std::cout << "1 - Enter the new figure\n";
        std::cout << "2 - Figure data output\n";
        std::cout << "3 - Exit the program\n";
        std::cin >> value;
        if (value == 1) {
            figures.push_back(figure_enter());
        }
        else if (value == 2) {
            for(int i = 0; i < figures.size(); i++) {
                //figures[i]->PrintCenter();
                figures[i]->PrintCoordinates();
                std::cout << figures[i]->Square();
            }
        }
        else if (value == 3) {
            std::cout << "Program completed!";
            return 0;
        }
        else {
            std::cout << "The entered option does not exist\n";
            std::cout << "\n";
            continue;
        }
    }
    return 0; 
}