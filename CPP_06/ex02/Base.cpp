#include "Base.hpp"

Base * generate(void) {
	std::cout << "random created: ";
	int n = rand() % 3;
	if (n == 0) {
		std::cout << "A" << std::endl;
		return new A;
	}
	else if (n == 1) {
		std::cout << "B" << std::endl;
		return new B;
	}
	else {
		std::cout << "C" << std::endl;
		return new C;
	}
}

void identify(Base* p) {
	std::cout << "=== identify from pointer===" << std::endl;
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	std::cout << "=== identify from reference===" << std::endl;
	Base res;
	try
	{
		res = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{}
	try
	{
		res = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{}
	try
	{
		res = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{}
}
