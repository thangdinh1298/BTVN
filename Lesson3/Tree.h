#pragma once
#include "StaticObject.h"
class Tree :
    public StaticObject
{
public:
    Tree() {
        std::cout << "Creating a Tree\n";
    }

    ~Tree() {
        std::cout << "Destroying a Tree\n";
    }
};

