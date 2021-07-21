#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
public:
	class GradeTooHighException: public std::exception
	{
	public:
		GradeTooHighException() {}
		virtual ~GradeTooHighException() throw() {}
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException: public std::exception
	{
	public:
		GradeTooLowException() {}
		virtual ~GradeTooLowException() throw() {}
		virtual const char* what() const throw();
	};

private:
	std::string const name;
	int grade;
	Bureaucrat() {}

public:
	Bureaucrat(std::string _name, int _grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& copy);
	~Bureaucrat() {}
	std::string const & getName() const;
	int getGrade() const;
	void incGrade();
	void decGrade();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src);

#endif
