#pragma once
#include "StaticObject.h"
class House :
    public StaticObject
{
public:
    House() {
        std::cout << "Creating a House\n";
    }

    std::string get_name() {
        return "House\n";
    }

    ~House() {
        std::cout << "Destroying a House\n";
    }
};

