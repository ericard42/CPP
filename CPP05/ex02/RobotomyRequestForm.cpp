#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) :
	Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute(), src.getTarget()) {
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
	setSigned(src.getSigned());
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
	Form("RobotomyRequest", 72, 45, target) {
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw(GradeTooLowException());
	if (!getSigned())
		throw(NotSigned());
	std::cout << "* drill noise *" << std::endl;
	if ((rand() % 2) == 0)
		std::cout << "<" << getTarget() << "> has been robotomized." << std::endl;
	else
		std::cout << "Robotomization of <" << getTarget() << "> has failed." << std::endl;
}