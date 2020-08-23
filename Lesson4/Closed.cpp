#include "Closed.h"

void Closed::unlock(Door* door) {
	std::cout << "Door closed, cannot unlock\n";
}

void Closed::open(Door* door) {
	std::unique_ptr<State> state_ptr = std::make_unique<Open>();
	door->setState(std::move(state_ptr));
	std::cout << "Door is open\n";
}

void Closed::close(Door* door) {
	std::cout << "Door is closed, cannot close\n";
}

void Closed::lock(Door* door) {
	std::unique_ptr<State> state_ptr = std::make_unique<Locked>();
	door->setState(std::move(state_ptr));
	std::cout << "Door is locked\n";
}

std::string Closed::getName() {
	return "Closed";
}

