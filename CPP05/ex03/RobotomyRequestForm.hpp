#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form {
	public :
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

		RobotomyRequestForm(std::string const target);

		void execute(Bureaucrat const &executor) const;
	private :
};

#endif
