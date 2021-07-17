#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default Constructor called" << std::endl;
	fixedValue = 0;
}

Fixed::Fixed(int const intVal)
{
	// std::cout << "Int Constructor called" << std::endl;
	this->fixedValue = intVal << fractionalBits;
}

Fixed::Fixed(float const floatVal)
{
	// std::cout << "Float Constructor called" << std::endl;
	this->fixedValue = (int)roundf(floatVal * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& copy)
{
	// std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	// std::cout << "Assignation Operator called" << std::endl;
	this->fixedValue = fixed.getRawBits();
	return (*this);
}

bool Fixed::operator==(const Fixed& src) const
{
	return (this->fixedValue == src.fixedValue);
}

bool Fixed::operator!=(const Fixed& src) const
{
	return (this->fixedValue != src.fixedValue);
}

bool Fixed::operator>(const Fixed& src) const
{
	return (this->fixedValue > src.fixedValue);
}

bool Fixed::operator<(const Fixed& src) const
{
	return (this->fixedValue < src.fixedValue);
}

bool Fixed::operator>=(const Fixed& src) const
{
	return (this->fixedValue >= src.fixedValue);
}

bool Fixed::operator<=(const Fixed& src) const
{
	return (this->fixedValue <= src.fixedValue);
}

Fixed Fixed::operator+(const Fixed& src) const
{
	Fixed res;

	res.setRawBits(this->fixedValue + src.fixedValue);
	return (res);
}

Fixed Fixed::operator-(const Fixed& src) const
{
	Fixed res;

	res.setRawBits(this->fixedValue - src.fixedValue);
	return (res);
}

Fixed Fixed::operator*(const Fixed& src) const
{
	Fixed res;

	res.setRawBits((this->fixedValue * src.fixedValue) / (1 << fractionalBits));
	return (res);
}

Fixed Fixed::operator/(const Fixed& src) const
{
	Fixed res;

	res.setRawBits((this->fixedValue / src.fixedValue) * (1 << fractionalBits));
	return (res);
}

Fixed& Fixed::operator++()
{
	this->fixedValue++;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->fixedValue--;
	return (*this);
}

Fixed Fixed::operator++(int dummy)
{
	Fixed tmp = *this;

	(void)dummy;
	this->fixedValue++;
	return (tmp);
}

Fixed Fixed::operator--(int dummy)
{
	Fixed tmp = *this;

	(void)dummy;
	this->fixedValue--;
	return (tmp);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->fixedValue);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedValue = raw;
}

float Fixed::toFloat(void) const
{
	return (this->fixedValue / (float)(1 << fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->fixedValue >> fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& src)
{
	out << src.toFloat();
	return (out);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}
