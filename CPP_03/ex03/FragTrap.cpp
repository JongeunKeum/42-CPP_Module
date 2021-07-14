#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap : Default Constructor" << std::endl;
}

FragTrap::FragTrap(std::string _name)
{
	std::cout << "FragTrap : Constructor - name" << std::endl;
	this->setName(_name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "FragTrap : Copy Constructor" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	std::cout << "FragTrap : Assignation Operator" << std::endl;
	this->ClapTrap::operator=(copy);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destructor" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "✋ Let's high-five guys~!!" << std::endl;
}
