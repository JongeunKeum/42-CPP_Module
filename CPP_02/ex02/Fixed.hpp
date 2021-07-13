#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int	fixedValue;
	static int const fractionalBits = 8;
public:
	Fixed();
	Fixed(int const intVal);
	Fixed(float const floatVal);
	Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& copy);
	bool operator==(const Fixed& src) const;
	bool operator!=(const Fixed& src) const;
	bool operator>(const Fixed& src) const;
	bool operator<(const Fixed& src) const;
	bool operator>=(const Fixed& src) const;
	bool operator<=(const Fixed& src) const;
	Fixed operator+(const Fixed& src) const;
	Fixed operator-(const Fixed& src) const;
	Fixed operator*(const Fixed& src) const;
	Fixed operator/(const Fixed& src) const;
	Fixed& operator++();						//	pre-increment
	Fixed& operator--();						//	pre-decrement
	Fixed operator++(int dummy);				//	post-increment
	Fixed operator--(int dummy);				//	post-decrement
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed& min(Fixed& f1, Fixed& f2);
	static const Fixed& min(const Fixed& f1, const Fixed& f2);
	static Fixed& max(Fixed& f1, Fixed& f2);
	static const Fixed& max(const Fixed& f1, const Fixed& f2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& src);

#endif
