#include "Intern.hpp"

Intern::Intern(const Intern& copy) {
	*this = copy;
}

Intern& Intern::operator=(const Intern& copy) {
	return *this;
	(void)copy;
}

Form* Intern::makeShrubbery(std::string form, std::string target) {
	std::cout << "Intern creates " << form << std::endl;
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomy(std::string form, std::string target) {
	std::cout << "Intern creates " << form << std::endl;
	return new RobotomyRequestForm(target);
}

Form* Intern::makePresidential(std::string form, std::string target) {
	std::cout << "Intern creates " << form << std::endl;
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string form, std::string target) {
	Form* formFunc = NULL;
	Form* (Intern::*formFuncArray[3])(std::string form, std::string target);
	formFuncArray[0] = &Intern::makeShrubbery;
	formFuncArray[1] = &Intern::makeRobotomy;
	formFuncArray[2] = &Intern::makePresidential;
	(!form.compare("Shrubbery Creation Form") && (formFunc = (this->*(formFuncArray[0]))(form, target)));
	(!form.compare("Robotomy Request Form") && (formFunc = (this->*(formFuncArray[1]))(form, target)));
	(!form.compare("Presidential Pardon Form") && (formFunc = (this->*(formFuncArray[2]))(form, target)));
	if (formFunc == NULL)
		throw NotKnownException();
	return formFunc;
}

const char* Intern::NotKnownException::what() const throw() {
	return "Cannot find the form.";
}
