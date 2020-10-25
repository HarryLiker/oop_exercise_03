#pragma once
#include <string>


class Figure {
protected:
    std::string Name;

public:
    Figure(const char *figure);

    //virtual void PrintCenter();

    virtual void PrintCoordinates() = 0;

    virtual float Square() = 0;

    virtual ~Figure();
};

