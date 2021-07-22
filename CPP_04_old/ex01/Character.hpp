#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string name;
	int actionPoints;
	AWeapon *aWP;
	Character() {}

public:
	Character(std::string const & name);
	Character(const Character& copy);
	Character& operator=(const Character& copy);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const & getName() const;
	int const & getAP() const;
	AWeapon const * getWP() const;
};

std::ostream& operator<<(std::ostream& out, const Character& src);

#endif
