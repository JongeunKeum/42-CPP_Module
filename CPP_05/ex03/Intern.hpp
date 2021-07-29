#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern() {}
	Intern(const Intern& copy);
	Intern& operator=(const Intern& copy);
	~Intern() {}
	Form* makeShrubbery(std::string form, std::string target);
	Form* makeRobotomy(std::string form, std::string target);
	Form* makePresidential(std::string form, std::string target);
	Form* makeForm(std::string form, std::string target);
	class NotKnownException: public std::exception
	{
	public:
		NotKnownException() {}
		virtual ~NotKnownException() throw() {}
		virtual const char* what() const throw();
	};
};

#endif
