#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
	this->hitPoints = hp;
	this->type = type;
}

Enemy::Enemy(const Enemy & copy)
{
	*this = copy;
}

Enemy& Enemy::operator=(const Enemy& copy)
{
	this->hitPoints = copy.hitPoints;
	this->type = copy.type;
	return *this;
}

Enemy::~Enemy()
{
	;
}

std::string const & Enemy::getType() const
{
	return this->type;
}

int Enemy::getHP() const
{
	return this->hitPoints;
}

void Enemy::takeDamage(int amount)
{
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
}
