#include "Victim.hpp"

Victim::Victim(std::string _name)
{
	name = _name;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& copy)
{
	std::cout << "Victim Copy Constructor" << std::endl;
	*this = copy;
}

Victim& Victim::operator=(const Victim& copy)
{
	std::cout << "Victim Assignation Operator" << std::endl;
	this->name = copy.name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName(void) const
{
	return (this->name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Victim& src)
{
	out << "I am " << src.getName() << " and I like otters!" << std::endl;
	return (out);
}
