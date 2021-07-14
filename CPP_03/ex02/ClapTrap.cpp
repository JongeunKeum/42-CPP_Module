#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap : Default Constructor" << std::endl;
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
	std::cout << "ClapTrap : Constructor - name" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap : Copy Constructor" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "ClapTrap : Assignation Operator" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Destructor" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "⚔  ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!!!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "🤕 " << this->name << " took " << amount << " fxxcking damage!!!" << std::endl;
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "❤  " << this->name << " healed for " << amount << " health ~.~" << std::endl;
	this->hitPoints += amount;
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setHitPoints(unsigned int amount)
{
	this->hitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->energyPoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	this->attackDamage = amount;
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

unsigned int ClapTrap::getHitPoints() const
{
	return (this->hitPoints);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->attackDamage);
}
