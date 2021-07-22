#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string target;
public:
	ShrubberyCreationForm(): Form("ShrubberyCreationForm", 0, 145, 137) {}
	ShrubberyCreationForm(std::string _target);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
	virtual ~ShrubberyCreationForm() {}
	virtual void execute(Bureaucrat const & executor) const;
};

#endif
