#include "BaseObject.h"
#include "StaticObject.h"
#include "Motorbike.h"
#include "House.h"
#include "Tree.h"
#include "Car.h"
#include "Motorbike.h"
#include <vector>
#include <memory>


int main() {
	std::shared_ptr<Motorbike> m_ptr = std::make_shared<Motorbike>(Motorbike("Xe may"));
	std::shared_ptr<Car> c_ptr = std::make_shared<Car>(Car ("Xe o to"));
	std::shared_ptr<Tree> t_ptr = std::make_shared<Tree>("Cay", 1, 2);
	std::shared_ptr<House> h_ptr = std::make_shared<House>("Nha", 3, 4);

	std::vector<std::shared_ptr<BaseObject>> vec;
	vec.push_back(m_ptr);
	vec.push_back(c_ptr);
	vec.push_back(t_ptr);
	vec.push_back(h_ptr);


	for (const auto& ptr : vec) {
		std::cout << ptr->get_name();
	}

	for (const auto& ptr: vec) {
	    ptr->print_position();
	    ptr->move(1,1);
	    ptr->print_position();
	}
}