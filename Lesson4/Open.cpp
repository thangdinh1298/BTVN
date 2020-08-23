#include "Open.h"


void Open::unlock(Door* door) {
	std::cout << "Door is open, cannot unlock\n";
}

void Open::open(Door* door) {
	std::cout << "Door is already open, cannot open\n";
}

void Open::close(Door* door) {
	std::unique_ptr<State> state_ptr = std::make_unique<Closed>();
	door->setState(std::move(state_ptr));
	std::cout << "Door closed\n";
}

void Open::lock(Door* door) {
	std::cout << "Door is open, cannot lock\n";
}

std::string Open::getName() {
	return "Open";
}
