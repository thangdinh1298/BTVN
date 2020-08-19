#pragma once
#include "BaseObject.h"
class DynamicObject :
    public BaseObject
{
public:
    DynamicObject() {
//        std::cout << "Creating a dynamic object\n";
    }

    explicit DynamicObject(std::string name, int x = 0, int y = 0) : BaseObject(name, x, y) {

    }

    void move(int x, int y) {
        x_ += x;
        y_ += y;
    }

    ~DynamicObject() {
//        std::cout << "Destroying a dynamic object\n";
    }
};

