#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Default Contructor called." << std::endl;
}

Zombie::Zombie(std::string _name)
{
	name = _name;
}

void	Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " is dead." << std::endl;
}
