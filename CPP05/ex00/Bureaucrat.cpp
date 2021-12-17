#include "Bureaucrat.hpp"

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
	_grade--;
	if (_grade < 1)
		throw (GradeTooHighException());
}

void	Bureaucrat::decrementGrade() {
	_grade++;
	if (_grade > 150)
		throw (GradeTooLowException());
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