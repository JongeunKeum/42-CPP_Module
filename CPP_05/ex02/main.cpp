#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void do_beSigned(Form &form, Bureaucrat &bureaucrat)
{
	try
	{
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << form << std::endl;
	}
}

void do_action(Form &form, Bureaucrat &bureaucrat)
{
	try
	{
		std::cout << form << std::endl;
		bureaucrat.executeForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	std::cout << "\ntry beSigned by wrong" << std::endl;
	do_beSigned(form, wrong);
	std::cout << "\ntry action with not signed form" << std::endl;
	do_action(form, correct);
	std::cout << "\ntry beSigned by correct" << std::endl;
	do_beSigned(form, correct);
	std::cout << "\ntry action with signed form by wrong" << std::endl;
	do_action(form, wrong);
	std::cout << "\ntry action with signed form by correct" << std::endl;
	do_action(form, correct);
}

int main()
{
	Bureaucrat jaeskim("hyunlee", 1);
	Bureaucrat wrong("wrong", 150);
	ShrubberyCreationForm form1("target");
	RobotomyRequestForm form2("target");
	PresidentialPardonForm form3("target");

	test_form(form1, jaeskim, wrong);
	test_form(form2, jaeskim, wrong);
	test_form(form3, jaeskim, wrong);

	return 0;
}