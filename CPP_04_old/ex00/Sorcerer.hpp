#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;
	Sorcerer() {}

public:
	Sorcerer(std::string _name, std::string _title);
	Sorcerer(const Sorcerer& copy);
	Sorcerer& operator=(const Sorcerer& copy);
	~Sorcerer();
	std::string getName(void) const;
	std::string getTitle(void) const;
	void polymorph(Victim const &) const;
};

std::ostream& operator<<(std::ostream& out, const Sorcerer& src);

#endif
