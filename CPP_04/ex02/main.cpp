#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* sam = new TacticalMarine;
	ISpaceMarine* none = NULL;
	std::cout << "\n--------------------\n" << std::endl;
	Squad* vlc = new Squad;
	Squad* test = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(sam);
	vlc->push(none);
	vlc->push(sam);
	*test = *vlc;
	Squad* copy = new Squad(*test);
	std::cout << "\n--------------------\n" << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\n--------------------\n" << std::endl;
	for (int i = 0; i < test->getCount(); ++i)
	{
		ISpaceMarine* cur = test->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\n--------------------\n" << std::endl;
	for (int i = 0; i < copy->getCount(); ++i)
	{
		ISpaceMarine* cur = copy->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\n--------------------\n" << std::endl;
	delete vlc;
	delete test;
	delete copy;
	return 0;
}
