#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon(): Victim("none") {}

public:
	Peon(std::string _name);
	Peon(const Peon& copy);
	Peon& operator=(const Peon& copy);
	~Peon();
	virtual void getPolymorphed() const;
};

#endif
