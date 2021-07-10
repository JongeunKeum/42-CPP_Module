#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	wp = NULL;
}

void	HumanB::attack()
{
	if (this->wp == NULL)
		std::cout << this->name << " cannot attack" << std::endl;
	else
		std::cout << this->name << " attacks with his " << this->wp->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wp)
{
	this->wp = &wp;
}
