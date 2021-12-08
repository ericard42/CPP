#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <time.h>
#include <stdlib.h>

void 	testingShrubberyCreation(Bureaucrat &george, Bureaucrat &bigBoss) {
	Form *shrubberyForm;

	try {
		shrubberyForm = new ShrubberyCreationForm("Maurice");
		std::cout << *shrubberyForm << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}
	george.signForm(*shrubberyForm);
	bigBoss.executeForm(*shrubberyForm);
	bigBoss.signForm(*shrubberyForm);
	bigBoss.signForm(*shrubberyForm);
	bigBoss.executeForm(*shrubberyForm);

	delete shrubberyForm;
}

void 	testingRobotomyRequest(Bureaucrat &george, Bureaucrat &bigBoss) {
	Form *robotomyForm;

	try {
		robotomyForm = new RobotomyRequestForm("Maurice");
		std::cout << *robotomyForm << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}
	george.signForm(*robotomyForm);
	bigBoss.executeForm(*robotomyForm);
	bigBoss.signForm(*robotomyForm);
	bigBoss.signForm(*robotomyForm);
	bigBoss.executeForm(*robotomyForm);

	delete robotomyForm;
}

void 	testingPresidentialPardon(Bureaucrat &george, Bureaucrat &bigBoss) {
	Form *presidentialForm;

	try {
		presidentialForm = new PresidentialPardonForm("Maurice");
		std::cout << *presidentialForm << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << "ERROR : " << e.what() << std::endl;
	}

	george.signForm(*presidentialForm);
	bigBoss.executeForm(*presidentialForm);
	bigBoss.signForm(*presidentialForm);
	bigBoss.signForm(*presidentialForm);
	bigBoss.executeForm(*presidentialForm);

	delete presidentialForm;
}

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
	std::cout << std::endl;
	testingPresidentialPardon(*george, *bigBoss);
	std::cout << std::endl;
	testingRobotomyRequest(*george, *bigBoss);
	std::cout << std::endl;
	testingShrubberyCreation(*george, *bigBoss);
	std::cout << std::endl;

	delete george;
	delete bigBoss;
}

