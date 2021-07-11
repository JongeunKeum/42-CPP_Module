#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int	fixedValue;
	static int const fractionalBits = 8;
public:
	Fixed();
	Fixed(Fixed& fixed);
	Fixed& operator=(const Fixed& copy);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
