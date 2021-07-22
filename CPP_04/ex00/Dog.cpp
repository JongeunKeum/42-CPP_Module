#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << type << " is born" << std::endl;
}

Dog::~Dog() {
	std::cout << type << " is dead" << std::endl;
}

Dog::Dog(const Dog& copy) {
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy) {
	this->Animal::operator=(copy);
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Bow-wow!!!" << std::endl;
}
