#pragma once
#include "StaticObject.h"
class House :
    public StaticObject
{
public:
    House() {
//        std::cout << "Creating a House\n";
    }

    explicit House(std::string name, int x = 0, int y = 0) : StaticObject(name, x, y)
    {

    }

    ~House() {
//        std::cout << "Destroying a House\n";
    }
};

