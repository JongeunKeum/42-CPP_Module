#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void do_beSigned(Form &form, Bureaucrat &bureaucrat)
{
	bureaucrat.signForm(form);
	std::cout << form << std::endl;
}

void do_action(Form &form, Bureaucrat &bureaucrat)
{
	std::cout << form << std::endl;
	bureaucrat.executeForm(form);
}

void test_form(Form &form, Bureaucrat correct, Bureaucrat wrong)
{
	std::cout << "\ntry beSigned by wrong" << std::endl;
	do_beSigned(form, wrong);
	std::cout << "---------------------------------" << std::endl;
	std::cout << "\ntry action with not signed form" << std::endl;
	do_action(form, correct);
	std::cout << "---------------------------------" << std::endl;
	std::cout << "\ntry beSigned by correct" << std::endl;
	do_beSigned(form, correct);
	std::cout << "---------------------------------" << std::endl;
	std::cout << "\ntry action with signed form by wrong" << std::endl;
	do_action(form, wrong);
	std::cout << "---------------------------------" << std::endl;
	std::cout << "\ntry action with signed form by correct" << std::endl;
	do_action(form, correct);
	std::cout << "=================================" << std::endl;
}

int main()
{
	Bureaucrat jkeum("jkeum", 1);
	Bureaucrat wrong("wrong", 150);
	ShrubberyCreationForm form1("home");
	RobotomyRequestForm form2("WooongChicken");
	PresidentialPardonForm form3("nope");

	test_form(form1, jkeum, wrong);
	test_form(form2, jkeum, wrong);
	test_form(form3, jkeum, wrong);

	return 0;
}