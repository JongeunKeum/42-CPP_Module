#include "Zombie.hpp"

int	main()
{
	Zombie *zom = new Zombie("Wonpil");
	Zombie *bie;

	zom->announce();
	delete zom;
	bie = newZombie("YoungK");
	bie->announce();
	randomChump("Day6");
	delete bie;
}