#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << std::endl;

	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->attack(c);
	std::cout << *me;

	return 0;
}
