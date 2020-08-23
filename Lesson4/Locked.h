#pragma once

#include "Door.h"
#include "Closed.h"
#include <iostream>
class State;

class Locked :
    public State
{
public:
    void unlock(Door* door);
    void open(Door* door);
    void close(Door* door);
    void lock(Door* door);
    std::string getName();
};

