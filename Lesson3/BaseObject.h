#pragma once
#include <iostream>
class BaseObject
{
public:
	BaseObject() {
		std::cout << "Constructing a base object\n";
	}

	virtual std::string get_name() {
		return "Base Object\n";
	}

	~BaseObject() {
		std::cout << "Deleting a base object\n";
	}

};

