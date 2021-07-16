#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
	name = _name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap Constructor - name" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap Copy Constructor" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "ClapTrap Assignation Operator" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "⚔  ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!!!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "🤕 ClapTrap " << this->name << " took " << amount << " fxxcking damage!!!" << std::endl;
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "❤  ClapTrap " << this->name << " healed for " << amount << " health ~.~" << std::endl;
	this->hitPoints += amount;
}
