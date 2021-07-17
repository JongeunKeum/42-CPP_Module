#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->name = name;
	this->actionPoints = 40;
	this->aWP = NULL;
}

Character::Character(const Character& copy)
{
	*this = copy;
}

Character& Character::operator=(const Character& copy)
{
	this->name = copy.getName();
	this->actionPoints = copy.getAP();
	return *this;
}

Character::~Character()
{
	;
}

void Character::recoverAP()
{
	if (this->actionPoints >= 30)
		this->actionPoints = 40;
	else
		this->actionPoints += 10;
}

void Character::equip(AWeapon* weapon)
{
	this->aWP = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (this->aWP != NULL)
	{
		if (this->actionPoints >= this->aWP->getAPCost())
		{
			this->actionPoints -= this->aWP->getAPCost();
			this->aWP->attack();
			std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->aWP->getName() << std::endl;
			enemy->takeDamage(this->aWP->getDamage());
			if (enemy->getHP() <= 0)
				delete enemy;
		}
	}
}

std::string const & Character::getName() const
{
	return (this->name);
}

int const & Character::getAP() const
{
	return (this->actionPoints);
}

AWeapon const * Character::getWP() const
{
	return (this->aWP);
}

std::ostream& operator<<(std::ostream& out, const Character& src)
{
	if (src.getWP() == NULL)
		out << src.getName() << " has " << src.getAP() << " and is unarmed" << std::endl;
	else
		out << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWP()->getName() << std::endl;
	return out;
}
