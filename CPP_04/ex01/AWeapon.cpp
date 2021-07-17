#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::AWeapon(const AWeapon& copy)
{
	*this = copy;
}

AWeapon& AWeapon::operator=(const AWeapon& copy)
{
	this->name = copy.getName();
	this->apcost = copy.getAPCost();
	this->damage = copy.getDamage();
	return (*this);
}

AWeapon::~AWeapon()
{
	;
}

std::string const & AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->apcost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}
