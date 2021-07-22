#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	std::string target;
public:
	PresidentialPardonForm(): Form("PresidentialPardonForm", 0, 25, 5) {}
	PresidentialPardonForm(std::string _target);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
	virtual ~PresidentialPardonForm() {}
	virtual void execute(Bureaucrat const & executor) const;
};

#endif
