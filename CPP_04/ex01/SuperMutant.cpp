#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& copy)
{
	*this = copy;
}

SuperMutant& SuperMutant::operator=(const SuperMutant& copy)
{
	this->hitPoints = copy.getHP();
	this->type = copy.getType();
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int amount)
{
	if (amount > 3)
		Enemy::takeDamage(amount);
}
