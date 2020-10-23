  
cmake_minimum_required (VERSION 3.2)
project (OOP)
add_executable (oop_exercise_03 main.cpp figure.cpp hexagon.cpp)

set_target_properties(oop_exercise_03 PROPERTIES CXX_STANDART 14 CXX_STANDART_REQUIRED ON)