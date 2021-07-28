#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string _target): Form("Robotomy Request Form", 0, 72, 45) {
	target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): Form(copy) {
	this->target = copy.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
	this->Form::operator=(copy);
	this->target = copy.target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getSignGrade() || executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::cout << "drrrrrrrr... drrrrrrrr..." << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << this->target << " has been robotomized successfully 50\% of the time." << std::endl;
	else
		std::cout << this->target << " hasn't been robotomized successfully 50\% of the time." << std::endl;
}
