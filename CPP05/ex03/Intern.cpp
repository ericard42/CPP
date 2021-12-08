#include "Intern.hpp"
#include <iostream>

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(Intern const &src) {
	*this = src;
}

Intern &Intern::operator=(Intern const &src) {
	(void)src;
	return (*this);
}

static Form *makeShrubberyCreationForm(std::string target) {
	return (new ShrubberyCreationForm(target));
}

static Form *makePresidentialPardonForm(std::string target) {
	return (new PresidentialPardonForm(target));
}

static Form *makeRobotomyRequestForm(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form *Intern::makeForm(std::string nameForm, std::string targetForm) const {
	std::string type[] = {
			"shrubbery creation",
			"robotomy request",
			"presidential pardon"
	};
	Form *(*actions[])(std::string const target) = {
			makeShrubberyCreationForm,
			makeRobotomyRequestForm,
			makePresidentialPardonForm
	};
	for (int i = 0; i < 3; i++)
	{
		if (type[i] == nameForm)
		{
			std::cout << "Intern creates <" << nameForm << ">" << std::endl;
			return (actions[i](targetForm));
		}
	}
	std::cout << "Form <" << nameForm << "> doesn't exist..." << std::endl;
	return (NULL);
}