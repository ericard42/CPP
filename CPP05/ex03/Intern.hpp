#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public :
		Intern();
		~Intern();
		Intern(Intern const &src);
		Intern &operator=(Intern const &src);

		Form *makeForm(std::string nameForm, std::string targetForm) const;
	private :
};

#endif
