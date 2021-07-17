#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant& copy);
	SuperMutant& operator=(const SuperMutant& copy);
	~SuperMutant();
	void takeDamage(int);
};

#endif
