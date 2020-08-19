#pragma once
#include "DynamicObject.h"
class Motorbike :
    public DynamicObject
{
public:
    Motorbike() {
//        std::cout << "Creating a Motorbike\n";
    }

    explicit Motorbike(std::string name, int x = 0, int y = 0) : DynamicObject(name, x, y) {

    }

    ~Motorbike() {
//        std::cout << "Destroying a Motorbike\n";
    }
};

