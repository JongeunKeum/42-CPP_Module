#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->wp->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wp)
{
	this->wp = &wp;
}
