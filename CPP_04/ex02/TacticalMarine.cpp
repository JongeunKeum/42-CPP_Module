#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& copy)
{
	*this = copy;
}

TacticalMarine& TacticalMarine::operator=(const TacticalMarine& copy)
{
	(void)copy;
	return (*this);
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	TacticalMarine* copy = new TacticalMarine;
	ISpaceMarine* ret;

	ret = copy;
	return ret;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
