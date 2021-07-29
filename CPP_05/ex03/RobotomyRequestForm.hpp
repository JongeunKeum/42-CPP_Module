#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	std::string target;
public:
	RobotomyRequestForm(): Form("Robotomy Request Form", false, 72, 45) {}
	RobotomyRequestForm(std::string _target);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
	virtual ~RobotomyRequestForm() {}
	std::string const & getTarget() const;
	virtual void execute(Bureaucrat const & executor) const;
};

#endif
