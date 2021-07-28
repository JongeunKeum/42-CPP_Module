#include "Form.hpp"

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
	Bureaucrat* jkeum = setInfo("jkeum", 9);
	Bureaucrat* polarBear = setInfo("Polar Bear", 5);
	Form form("financial", false, 5, 7);
	Form copiedForm = form;

	std::cout << "---------- form ----------" << std::endl;
	std::cout << copiedForm;

	std::cout << "----- jkeum has form -----" << std::endl;
	std::cout << *jkeum;
	jkeum->signForm(copiedForm);
	std::cout << copiedForm;

	std::cout << "--- Polar Bear has form ---" << std::endl;
	std::cout << *polarBear;
	polarBear->signForm(copiedForm);
	std::cout << copiedForm;

	delete jkeum;
	delete polarBear;

	std::cout << "---------------------------" << std::endl;

	system("leaks form");

	return 0;
}