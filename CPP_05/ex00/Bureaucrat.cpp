#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string _name, int _grade) {
	name = _name;
	grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) {
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy) {
	this->name = copy.name;
	this->grade = copy.grade;
	return *this;
}

std::string const & Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::incGrade() {
	if (--this->grade < 1) {
		this->grade++;
		throw GradeTooHighException();
	}
}

void Bureaucrat::decGrade() {
	if (++this->grade > 150) {
		this->grade--;
		throw GradeTooLowException();
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "1 is the maximum grade. Can't increase it any more.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "150 is the minimum grade. Can't decrease it any more.";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src) {
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return out;
}
