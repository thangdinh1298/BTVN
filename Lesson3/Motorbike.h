#pragma once
#include "DynamicObject.h"
class Motorbike :
    public DynamicObject
{
public:
    Motorbike() {
        std::cout << "Creating a Motorbike\n";
    }

    ~Motorbike() {
        std::cout << "Destroying a Motorbike\n";
    }
};

