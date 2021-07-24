#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
private:
	std::string _type;
	unsigned int _xp;
public:
	Cure(): AMateria("cure") {}
	Cure(const Cure& copy): AMateria(copy) {}
	Cure& operator=(const Cure& copy);
	virtual ~Cure() {}
	std::string const & getType() const;
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
