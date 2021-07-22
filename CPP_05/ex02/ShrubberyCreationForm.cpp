#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): Form("ShrubberyCreationFrom", 0, 145, 137) {
	target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): Form(copy) {
	this->target = copy.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
	this->Form::operator=(copy);
	this->target = copy.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getSignGrade() || executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::ifstream inputFile("AsciiTree");
	std::ofstream file(this->target + "_shrubbery");
	std::string line;
	while (inputFile) {
		getline(inputFile, line);
		file << line;
	}
}
