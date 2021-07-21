#include "Bureaucrat.hpp"

int main() {
	Bureaucrat jkeum("jkeum", 2);
	Bureaucrat jokeum("jokeum", 148);
	Bureaucrat me = jkeum;

	try
	{
		me.incGrade();
		std::cout << me;
		me.incGrade();
		std::cout << me;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << me;
	std::cout << "------------------------" << std::endl;
	try
	{
		jokeum.decGrade();
		std::cout << jokeum;
		jokeum.decGrade();
		std::cout << jokeum;
		jokeum.decGrade();
		std::cout << jokeum;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << jokeum;
	return 0;
}