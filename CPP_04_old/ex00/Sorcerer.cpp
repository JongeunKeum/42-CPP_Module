#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string _name, std::string _title)
{
	name = _name;
	title = _title;
	std::cout << name << ", " << title << " is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& copy)
{
	std::cout << "Sorcerer Copy Constructor" << std::endl;
	*this = copy;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& copy)
{
	std::cout << "Sorcerer Assignation Operator" << std::endl;
	this->name = copy.name;
	this->title = copy.title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << " is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName(void) const
{
	return (this->name);
}

std::string Sorcerer::getTitle(void) const
{
	return (this->title);
}

void Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream& out, const Sorcerer& src)
{
	out << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}
