#pragma once
#include "BaseObject.h"
class StaticObject :
    public BaseObject
{
public:
    StaticObject() {
//        std::cout << "Creating a static object\n";
    }

    explicit  StaticObject(std::string name, int x = 0, int y = 0) : BaseObject(name, x, y) {

    }

    void move(int x, int y) {
        std::cout << "Static objects can't be moved\n";
    }

    ~StaticObject() {
//        std::cout << "Destroying a base object\n";
    }
};

