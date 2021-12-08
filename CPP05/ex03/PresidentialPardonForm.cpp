#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) :
		Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute(), src.getTarget()){
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
	setSigned(src.getSigned());

	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
	Form ("PresidentialPardon", 25, 5, target) {

}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw(GradeTooLowException());
	if (!getSigned())
		throw(NotSigned());
	std::cout << "<" << getTarget() << "> has been forgiven by  Zafod Beeblebrox" << std::endl;
}