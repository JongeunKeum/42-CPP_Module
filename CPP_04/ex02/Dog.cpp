#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << this->type << " is born" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	this->brain = new Brain(*copy.getBrain());
}

Dog &Dog::operator=(Dog const &copy)
{
	if (this != &copy)
	{
		this->~Dog();
		this->brain = new Brain(*copy.getBrain());
		this->Animal::operator=(copy);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << type << " is dead" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Bow-wow!!!" << std::endl;
}

Brain *Dog::getBrain() const
{
	return this->brain;
}
