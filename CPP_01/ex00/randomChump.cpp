#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie *zb = new Zombie(name);

	zb->announce();
}
