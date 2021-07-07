#include "Zombie.hpp"

int	main()
{
	Zombie *zom = new Zombie("Wonpil");
	Zombie *bie;

	zom->announce();
	bie = newZombie("YoungK");
	bie->announce();
}