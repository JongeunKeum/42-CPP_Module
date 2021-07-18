#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:

public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine& copy);
	TacticalMarine& operator=(const TacticalMarine& copy);
	virtual ~TacticalMarine();
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif
