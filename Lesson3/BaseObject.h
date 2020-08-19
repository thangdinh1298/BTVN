#pragma once
#include <iostream>
class BaseObject
{
public:
    BaseObject() = default;
	explicit BaseObject(std::string name, int x = 0, int y = 0)
	        : name_(std::move(name)), x_(x), y_(y)
    {

    }

	std::string get_name() {
		return name_ + "\n";
	}

    virtual void move(int x, int y) = 0;

	void print_position() {
	    std::cout << name_ + " is at " << x_ << ":" << y_ << std::endl;
	}

	~BaseObject() {
//		std::cout << "Deleting a base object\n";
	}

protected:
    std::string name_;
	int x_;
	int y_;
};

