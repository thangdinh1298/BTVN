#pragma once
#include "BaseObject.h"
class DynamicObject :
    public BaseObject
{
public:
    DynamicObject() {
        std::cout << "Creating a dynamic object\n";
    }

    ~DynamicObject() {
        std::cout << "Destroying a dynamic object\n";
    }
};

