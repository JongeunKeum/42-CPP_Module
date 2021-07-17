#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon("Power Fist", 8, 50)
{
	;
}

PowerFist::PowerFist(const PowerFist& copy)
{
	*this = copy;
}

PowerFist& PowerFist::operator=(const PowerFist& copy)
{
	this->name = copy.getName();
	this->apcost = copy.getAPCost();
	this->damage = copy.getDamage();
	return (*this);
}

PowerFist::~PowerFist()
{
	;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
