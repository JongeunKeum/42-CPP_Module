#include "Fixed.hpp"

int main(void)
{
	Fixed a(1);
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(1.0f);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "----------------------" << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << "------comparison------" << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a <= c) << std::endl;
	std::cout << (a >= c) << std::endl;
	std::cout << (a == c) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << "------arithmetic------" << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	return 0;
}
