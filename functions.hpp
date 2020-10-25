#pragma once 

#include <iostream>
#include <string>
#include "figure.hpp"
#include "rhombus.hpp"
#include "pentagon.hpp"
#include "hexagon.hpp"
#include <vector>

Figure * enter_in_figure(std::string figure);

Figure * figure_enter();

float square_all_figures(std::vector<Figure*> vector);

void figure_delete(std::vector<Figure*> &vector, int index);
