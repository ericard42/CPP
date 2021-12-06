#include "Form.hpp"

Form::Form() : _gradeToSign(0), _gradeToExecute(0) {

}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute) :
	_signed(false), _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw (GradeTooLowException());
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw(GradeTooHighException());
}

Form::~Form() {

}

Form::Form(Form const &src) _{
	*this = src;
}

Form &Form::operator=(Form const &src) {
	_signed = src._signed;

	return (*this);
}

std::string const	&Form::getName() const {
	return (_name);
}

bool	Form::getSigned() const{
	return (_signed);
}

int	Form::getGradeToSign() const{
	return (_gradeToSign);
}

int	Form::getGradeToExecute() const{
	return (_gradeToExecute);
}


const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

std::ostream  &operator<<(std::ostream &stream, Form const &src) {
	std::string sign = "";
	if (!src._signed)
		sign = "not";
	return (stream << "<" << src._name << "> is " << sign << "signed.\nIt need grade <" <<
	src._gradeToSign << "> to be signed and grade <" << src._gradeToExecute << "> to be executed.");
}