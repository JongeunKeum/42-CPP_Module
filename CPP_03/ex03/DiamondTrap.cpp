#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap : Default Constructor" << std::endl;
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string _name)
{
	std::cout << "DiamondTrap : Constructor - name" << std::endl;
	this->name = _name;
	ClapTrap::setName(_name + "_clap_name");

};	

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	std::cout << "DiamondTrap : Copy Constructor" << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	std::cout << "DiamondTrap : Assignation Operator" << std::endl;
	this->ClapTrap::operator=(copy);
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap : Destructor" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::getName() << std::endl;
}
