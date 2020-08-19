#pragma once
#include "DynamicObject.h"
class Car :
    public DynamicObject
{
public:
    Car() {
//        std::cout << "Creating a car\n";
    }

    explicit Car(std::string name, int x = 0, int y = 0) : DynamicObject(name, x, y)
    {

    }

    ~Car() {
//        std::cout << "Destroying a car\n";
    }
};

