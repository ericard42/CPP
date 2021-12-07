#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) {
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
	return (*this);
}

PresidentialPardonForm(std::string &target) :
	Form ("PardonForm", 25, 5){

}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw(GradeTooLowException());
	if (!_signed)
		throw(NotSigned());
}