#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist& copy);
	PowerFist& operator=(const PowerFist& copy);
	virtual ~PowerFist();
	void attack() const;
};

#endif
