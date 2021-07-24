#include "AMateria.hpp"

AMateria::AMateria()
{
	_xp = 0;
}

AMateria::AMateria(std::string const & type)
{
	_type = type;
	_xp = 0;
}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria& copy)
{
	if (this != &copy)
		this->_xp = copy._xp;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter&)
{
	this->_xp += 10;
}
