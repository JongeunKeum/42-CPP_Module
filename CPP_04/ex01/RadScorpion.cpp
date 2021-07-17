#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& copy)
{
	*this = copy;
}

RadScorpion& RadScorpion::operator=(const RadScorpion& copy)
{
	this->hitPoints = copy.getHP();
	this->type = copy.getType();
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

// void RadScorpion::takeDamage(int amount)
// {
// 	Enemy::takeDamage(amount);
//}
