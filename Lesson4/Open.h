#pragma once

#include "Closed.h"
#include "Door.h"
#include <iostream>

class State;

class Open :
    public State
{
public:
    void unlock(Door* door);
    void open(Door* door);
    void close(Door* door);
    void lock(Door* door);
    std::string getName();
};

