#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
protected:
	std::string type;
	int hitPoints;
	Enemy() {}
public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy& copy);
	Enemy& operator=(const Enemy& copy);
	virtual ~Enemy();
	std::string const & getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif
