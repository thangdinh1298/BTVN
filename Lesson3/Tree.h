#pragma once
#include "StaticObject.h"
class Tree :
    public StaticObject
{
public:
    Tree() {
//        std::cout << "Creating a Tree\n";
    }

    explicit Tree(std::string name, int x = 0, int y = 0) : StaticObject(name, x, y) {

    }

    ~Tree() {
//        std::cout << "Destroying a Tree\n";
    }
};

