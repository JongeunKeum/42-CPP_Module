#include "Ice.hpp"

Ice& Ice::operator=(const Ice& copy)
{
	if (this != &copy)
		AMateria::operator=(copy);
	return *this;
}

std::string const & Ice::getType() const
{
	return this->_type;
}

unsigned int Ice::getXP() const
{
	return this->_xp;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
