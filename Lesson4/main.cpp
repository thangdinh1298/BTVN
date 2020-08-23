#include "Locked.h"
#include <memory>


int main() {
	{
		Door door(std::make_unique<Locked>());
		door.printState();


		door.close();
		door.unlock();
		door.lock();
		door.open();
	}
	
	{
		Door door(std::make_unique<Open>());
		door.printState();


		door.close();
		door.lock();
		door.unlock();
		door.open();
	}

	{
		Door door(std::make_unique<Closed>());
		door.printState();


		door.close();
		door.unlock();
		door.lock();
		door.open();
	}

}