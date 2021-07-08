#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wp):wp(wp)
{
	this->name = name;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->wp.getType() << std::endl;
}
