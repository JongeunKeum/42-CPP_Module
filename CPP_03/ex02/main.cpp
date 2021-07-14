#include "FragTrap.hpp"

int main()
{
	FragTrap jkeum("jkeum");
	FragTrap hyunlee("hyunlee");
	FragTrap me;

	me = jkeum;
	me.setAttackDamage(20);
	me.attack(hyunlee.getName());
	hyunlee.takeDamage(me.getAttackDamage());
	hyunlee.beRepaired(10);
	me.highFivesGuys();
	return (0);
}
