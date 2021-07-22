#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << this->type << " is born" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	this->brain = new Brain(*copy.getBrain());
}

Cat &Cat::operator=(Cat const &copy)
{
	if (this != &copy)
	{
		this->~Cat();
		this->brain = new Brain(*copy.getBrain());
		this->Animal::operator=(copy);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << type << " is dead" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow!!" << std::endl;
}

Brain *Cat::getBrain() const
{
	return this->brain;
}
