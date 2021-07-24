#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
private:
	std::string _type;
	unsigned int _xp;
public:
	Ice(): AMateria("ice") {}
	Ice(const Ice& copy): AMateria(copy) {}
	Ice& operator=(const Ice& copy);
	virtual ~Ice() {}
	std::string const & getType() const;
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
