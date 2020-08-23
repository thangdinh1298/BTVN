#include "Door.h"

void Door::open() {
	this->state_->open(this);
}

void Door::close() {
	this->state_->close(this);
}

void Door::lock() {
	this->state_->lock(this);
}

void Door::unlock() {
	this->state_->unlock(this);
}

void Door::setState(std::unique_ptr<State> state) {
	this->state_ = std::move(state);
}

void Door::printState() {
	std::cout << "\nDoor state is: " << this->state_->getName() << std::endl;
}