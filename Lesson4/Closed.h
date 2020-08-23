#pragma once
#include "State.h"
#include "Door.h"
#include "Open.h"
#include "Locked.h"
#include <iostream>'

class Closed :
    public State
{
public:
    void unlock(Door* door);
    void open(Door* door);
    void close(Door* door);
    std::string getName();
    void lock(Door* door);
};

