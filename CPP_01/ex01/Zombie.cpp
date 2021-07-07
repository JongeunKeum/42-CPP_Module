#include "Zombie.hpp"

Zombie::Zombie(std::string _name)
{
	name = _name;
}

void	Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " is dead." << std::endl;
}
