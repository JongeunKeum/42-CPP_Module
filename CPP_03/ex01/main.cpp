#include "ScavTrap.hpp"

int main()
{
	ScavTrap jkeum("jkeum");
	ScavTrap hyunlee("hyunlee");
	ScavTrap me;

	me = jkeum;
	me.setAttackDamage(20);
	me.attack(hyunlee.getName());
	hyunlee.takeDamage(me.getAttackDamage());
	hyunlee.beRepaired(10);
	me.guardGate();
	return (0);
}
