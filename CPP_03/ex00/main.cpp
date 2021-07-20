#include "ClapTrap.hpp"

int main()
{
	ClapTrap jkeum("jkeum");
	ClapTrap me = jkeum;

	jkeum.attack("hyunlee");
	jkeum.takeDamage(20);
	jkeum.beRepaired(10);

	me.attack("yeslee");
	me.takeDamage(30);
	me.beRepaired(20);
	return (0);
}
