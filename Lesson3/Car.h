#pragma once
#include "DynamicObject.h"
class Car :
    public DynamicObject
{
public:
    Car() {
        std::cout << "Creating a car\n";
    }

    ~Car() {
        std::cout << "Destroying a car\n";
    }
};

