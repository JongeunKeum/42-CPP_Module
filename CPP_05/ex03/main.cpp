#include "Intern.hpp"

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	wrong.signForm(form);
	correct.executeForm(form);
	correct.signForm(form);
	wrong.executeForm(form);
	correct.executeForm(form);
	std::cout << std::endl;
}

int main()
{
	{
		srand(time(NULL));
		Bureaucrat jkeum("jkeum", 1);
		Bureaucrat wrong("wrong", 150);
		Intern intern;
		Form *form;
		try {
			form = intern.makeForm("Shrubbery Creation Form", "home");
			test_form(*form, jkeum, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form = intern.makeForm("Robotomy Request Form", "WooongChicken");
			test_form(*form, jkeum, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form = intern.makeForm("Presidential Pardon Form", "nope");
			test_form(*form, jkeum, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form = intern.makeForm("Wrong Name", "target");
			test_form(*form, jkeum, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	system("leaks Bureaucrat");
	return 0;
}