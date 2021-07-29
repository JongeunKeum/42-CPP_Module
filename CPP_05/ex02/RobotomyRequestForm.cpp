#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string _target): Form("Robotomy Request Form", false, 72, 45) {
	target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): Form(copy) {
	this->target = copy.getTarget();
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
	this->Form::operator=(copy);
	this->target = copy.getTarget();
	return *this;
}

std::string const & RobotomyRequestForm::getTarget() const {
	return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == false)
		throw NotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::cout << "drrrrrrrr... drrrrrrrr..." << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << this->target << " has been robotomized successfully 50\% of the time." << std::endl;
	else
		std::cout << this->target << " hasn't been robotomized successfully 50\% of the time." << std::endl;
}
