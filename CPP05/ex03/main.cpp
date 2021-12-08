#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <time.h>
#include <stdlib.h>

int		main()
{
	srand((unsigned)time(NULL));
	Bureaucrat *george;
	Bureaucrat *bigBoss;

	try {
		george = new Bureaucrat("George", 150);
		std::cout << *george << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}
	try {
		bigBoss = new Bureaucrat("BigBoss", 1);
		std::cout << *bigBoss << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}

	Intern noName;
	Form *newForm;

	newForm = noName.makeForm("robotomy request", "Maurice");
	george->signForm(*newForm);

	delete newForm;
	delete george;
	delete bigBoss;
}

