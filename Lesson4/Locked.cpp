#include "Locked.h"

void Locked::unlock(Door* door) {
	std::unique_ptr<State> state_ptr = std::make_unique<Closed>();
	door->setState(std::move(state_ptr));
	std::cout << "Door closed\n";
}

void Locked::open(Door* door) {
	std::cout << "Door is locked, cannot open\n";
}

void Locked::close(Door* door) {
	std::cout << "Door is locked, cannot close\n";
}

void Locked::lock(Door* door) {
	std::cout << "Door is locked, cannot lock\n";
}

std::string Locked::getName() {
	return "Locked";
}
