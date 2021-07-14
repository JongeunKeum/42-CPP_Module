#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap jkeum("jkeum");
	DiamondTrap hyunlee("hyunlee");
	DiamondTrap me;

	me = jkeum;
	// me.setAttackDamage(20);
	me.attack(hyunlee.getName());
	hyunlee.takeDamage(me.getAttackDamage());
	hyunlee.beRepaired(10);
	me.whoAmI();
	return (0);
}
