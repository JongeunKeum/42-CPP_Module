#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():AWeapon("Plasma Rifle", 5, 21)
{
	;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& copy)
{
	*this = copy;
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& copy)
{
	this->name = copy.getName();
	this->apcost = copy.getAPCost();
	this->damage = copy.getDamage();
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
	;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
