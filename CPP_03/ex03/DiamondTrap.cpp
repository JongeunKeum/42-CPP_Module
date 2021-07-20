#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default Constructor" << std::endl;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string _name): ClapTrap::ClapTrap(_name), ScavTrap::ScavTrap(_name), FragTrap::FragTrap(_name)
{
	std::cout << "DiamondTrap Constructor - name" << std::endl;
	this->name = _name;
	ClapTrap::name = _name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
};	

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	std::cout << "DiamondTrap Assignation Operator" << std::endl;
	this->ClapTrap::operator=(copy);
	this->name = copy.name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "♦️  DiamondTrap name is " << this->name << std::endl;
	std::cout << "👏 ClapTrap name is " << ClapTrap::name << std::endl;
}
