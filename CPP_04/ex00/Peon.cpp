#include "Peon.hpp"

Peon::Peon(std::string _name): Victim(_name)
{
	std::cout << "Zog Zog" << std::endl;
}

Peon::Peon(const Peon& copy): Victim(copy.getName())
{
	std::cout << "Peon Copy Constructor" << std::endl;
	*this = copy;
}

Peon& Peon::operator=(const Peon& copy)
{
	std::cout << "Peon Assignation Constructor" << std::endl;
	this->Victim::operator=(copy);
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
