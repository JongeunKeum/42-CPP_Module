#include "Animal.hpp"

Animal::Animal() {
	type = "Some animal";
	std::cout << type << " is born" << std::endl;
}

Animal::Animal(const Animal& copy) {
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy) {
	this->type = copy.getType();
	return *this;
}

Animal::~Animal() {
	std::cout << type << " is dead." << std::endl;
}

std::string const & Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "Animal Animal!!!" << std::endl;
}
