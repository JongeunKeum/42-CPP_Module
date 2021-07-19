#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int count;
	ISpaceMarine** member;
public:
	Squad();
	Squad(const Squad& copy);
	Squad& operator=(const Squad& copy);
	virtual ~Squad();
	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);
};

#endif
