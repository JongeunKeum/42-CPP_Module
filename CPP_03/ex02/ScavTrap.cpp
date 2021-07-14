#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap : Default Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
	std::cout << "ScavTrap : Constructor - name" << std::endl;
	this->setName(_name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ScavTrap : Copy Constructor" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	std::cout << "ScavTrap : Assignation Operator" << std::endl;
	this->ClapTrap::operator=(copy);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "🛡  " << this->getName() << " have enterred in Gate keeper mode." << std::endl;
}
