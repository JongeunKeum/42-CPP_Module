#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
	std::cout << "ScavTrap Constructor - name" << std::endl;
	this->name = _name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ScavTrap Copy Constructor" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	std::cout << "ScavTrap Assignation Operator" << std::endl;
	this->ClapTrap::operator=(copy);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "⚔  ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!!!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "🛡  ScavTrap " << this->name << " have enterred in Gate keeper mode." << std::endl;
}
