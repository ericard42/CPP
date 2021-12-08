#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>

class ShrubberyCreationForm : public Form {
	public :
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);

		ShrubberyCreationForm(std::string const target);

		void execute(Bureaucrat const &executor) const;
	private :
};

#endif
