#pragma once
#include "BaseObject.h"
class StaticObject :
    public BaseObject
{
public:
    StaticObject() {
        std::cout << "Creating a static object\n";
    }

    std::string get_name() {
        return "Static Object\n";
    }

    ~StaticObject() {
        std::cout << "Destroying a base object\n";
    }
};

