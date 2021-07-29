#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target): Form("Presidential Pardon Form", false, 25, 5) {
	target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy): Form(copy) {
	this->target = copy.getTarget();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {
	this->Form::operator=(copy);
	this->target = copy.getTarget();
	return *this;
}

std::string const & PresidentialPardonForm::getTarget() const {
	return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == false)
		throw NotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
