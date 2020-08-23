#pragma once
#include "State.h"
#include <memory>
#include <iostream>

class State;

class Door
{
private:
	std::unique_ptr<State> state_;

public:
	Door(std::unique_ptr<State> state) : state_ (std::move(state))
	{

	}

	void open();
	void close();
	void lock();
	void unlock();
	void setState(std::unique_ptr<State> state);
	void printState();
};

