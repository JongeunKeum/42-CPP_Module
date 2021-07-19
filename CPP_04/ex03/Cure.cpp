#include "Cure.hpp"

Cure& Cure::operator=(const Cure& copy)
{
	if (this != &copy)
		AMateria::operator=(copy);
	return *this;
}

std::string const & Cure::getType() const
{
	return this->_type;
}

unsigned int Cure::getXP() const
{
	return this->_xp;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
