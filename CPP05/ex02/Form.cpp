#include "Form.hpp"

Form::Form() : _gradeToSign(0), _gradeToExecute(0) {

}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute, std::string const target) :
	_signed(false), _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _target(target) {
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw (GradeTooLowException());
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw(GradeTooHighException());
}

Form::~Form() {

}

Form::Form(Form const &src) :
	_name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute), _target(src._target){
	*this = src;
}

Form &Form::operator=(Form const &src) {
	_signed = src.getSigned();

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

std::string const &Form::getTarget() const {
	return(_target);
}


const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char *Form::NotSigned::what() const throw() {
	return ("Form is not signed");
}

const char *Form::AlreadySigned::what() const throw() {
	return ("Form is already signed");
}

void Form::beSigned(Bureaucrat const &b) {
	if (b.getGrade() > getGradeToSign())
		throw(GradeTooLowException());
	if (_signed)
		throw(AlreadySigned());
	_signed = true;
}

void Form::setSigned(bool sign) {
	_signed = sign;
}

std::ostream  &operator<<(std::ostream &stream, Form const &src) {
	std::string sign = "";
	if (!src.getSigned())
		sign = "not";
	return (stream << "<" << src.getName() << "> is " << sign << " signed.\nIt need grade <" <<
	src.getGradeToSign() << "> to be signed and grade <" << src.getGradeToExecute() << "> to be executed.");
}