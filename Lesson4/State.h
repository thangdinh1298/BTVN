#pragma once
#include <string>
class Door;
class State
{
public:
	virtual void unlock(Door* door) = 0;
	virtual void open(Door* door) = 0;
	virtual void close(Door* door) = 0;
	virtual void lock(Door* door) = 0;
	virtual std::string getName() = 0;
};

