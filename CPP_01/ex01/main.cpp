#include "Zombie.hpp"

int	main()
{
	Zombie	*zb;

	zb = zombieHorde(5, "day6");
	for (int i = 0; i < 5; i++)
		zb[i].announce();
	delete[] zb;
	return (0);
}
