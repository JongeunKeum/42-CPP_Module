#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
private:
	int			age;
	double		weight;
	double		height;
	std::string	name[10];
	std::string	favoriteMeal[10];

public:
	void	ponyOnTheHeap();
	void	ponyOnTheStack();
}

#endif