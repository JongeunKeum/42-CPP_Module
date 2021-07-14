#include "ScavTrap.hpp"

int main()
{
	ScavTrap jkeum("jkeum");
	ScavTrap hyunlee;

	hyunlee = jkeum;
	hyunlee.attack("jkeum");
	hyunlee.takeDamage(10);
	hyunlee.beRepaired(10);
	hyunlee.guardGate();
	return (0);
}
