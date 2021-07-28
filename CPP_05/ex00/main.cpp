#include "Bureaucrat.hpp"

Bureaucrat* setInfo(std::string name, int grade) {
	try
	{
		return new Bureaucrat(name, grade);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return NULL;
	}
}

int main() {
	Bureaucrat* low = setInfo("low", -1);
	Bureaucrat* high = setInfo("high", 200);
	Bureaucrat* jkeum = setInfo("jkeum", 2);
	Bureaucrat* jokeum = setInfo("jokeum", 148);
	Bureaucrat me(*jkeum);

	(void)low;
	(void)high;

	std::cout << "------------------------" << std::endl;
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
		jokeum->decGrade();
		std::cout << *jokeum;
		jokeum->decGrade();
		std::cout << *jokeum;
		jokeum->decGrade();
		std::cout << *jokeum;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *jokeum;

	delete jkeum;
	delete jokeum;

	system("leaks bureaucrat");

	return 0;
}