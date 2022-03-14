#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() {

}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
	_grade = src._grade;

	return (*this);
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade) {
	if (_grade > 150)
		throw (GradeTooLowException());
	else if (_grade < 1)
		throw (GradeTooHighException());
}

std::string const &Bureaucrat::getName() const {
	return (_name);
}

int 	Bureaucrat::getGrade() const {
	return (_grade);
}

void 	Bureaucrat::incrementGrade() {
	if (_grade == 1)
		throw (GradeTooHighException());
	_grade--;
}

void	Bureaucrat::decrementGrade() {
	if (_grade == 150)
		throw (GradeTooLowException());
	_grade++;
}

void 	Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << "<" << getName() << "> signs <" << form.getName() << ">" << std::endl;
	}
	catch (std::exception const &e){
		std::cout << "<" << getName() << "> cannot sign <" << form.getName() << "> because <" << e.what() << ">" << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("The note is too high !");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("The note is too low !");
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &src) {
	return (stream << "<" << src.getName() << ">, bureaucrat grade <" << src.getGrade() << ">");
}