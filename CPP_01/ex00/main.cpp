#include "Zombie.hpp"

int	main()
{
	Zombie zom = Zombie("Wonpil");
	Zombie *bie;

	zom.announce();
	bie = newZombie("YoungK");
	bie->announce();
	randomChump("Day6");
	delete bie;
}