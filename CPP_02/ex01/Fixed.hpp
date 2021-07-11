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
	Fixed(int const intVal);
	Fixed(float const floatVal);
	Fixed(Fixed& fixed);
	Fixed& operator=(const Fixed& copy);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& src);

#endif
