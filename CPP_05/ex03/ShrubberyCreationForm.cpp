#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): Form("Shrubbery Creation Form", false, 145, 137) {
	target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): Form(copy) {
	this->target = copy.getTarget();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
	this->Form::operator=(copy);
	this->target = copy.getTarget();
	return *this;
}

std::string const & ShrubberyCreationForm::getTarget() const {
	return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getSignGrade() || executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else if (this->getSigned() == false)
		throw NotSignedException();
	std::ifstream inputFile("AsciiTree");
	std::ofstream file(this->target + "_shrubbery");
	std::string line;
	while (inputFile) {
		getline(inputFile, line);
		file << line;
		if (!inputFile.eof())
			file << "\n";
		else
			break ;
	}
}
