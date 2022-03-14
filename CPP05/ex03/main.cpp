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
	Bureaucrat *bigBoss;

	try {
		bigBoss = new Bureaucrat("BigBoss", 1);
		std::cout << *bigBoss << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}

	Intern noName;
	Form *robotomyForm = NULL;
	Form *shrubberyForm = NULL;
	Form *presidentialForm = NULL;
	Form *noForm = NULL;

	robotomyForm = noName.makeForm("robotomy request", "Maurice");
	shrubberyForm = noName.makeForm("shrubbery creation", "garden");
	presidentialForm = noName.makeForm("presidential pardon", "Maurice");
	noForm = noName.makeForm("Potato", "me");

	bigBoss->signForm(*presidentialForm);
	bigBoss->executeForm(*presidentialForm);

	delete robotomyForm;
	delete shrubberyForm;
	delete presidentialForm;
	delete noForm;
	delete bigBoss;
}

