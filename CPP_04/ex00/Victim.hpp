#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
private:
	std::string name;
	Victim() {}

public:
	Victim(std::string _name);
	Victim(const Victim& copy);
	Victim& operator=(const Victim& copy);
	~Victim();
	std::string getName(void) const;
	virtual void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& out, const Victim& src);

#endif
