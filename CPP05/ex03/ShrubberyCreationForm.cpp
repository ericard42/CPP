#include "ShrubberyCreationForm.hpp"
#include <cstring>
#include <iostream>
#include <fstream>

const std::string tree =	"      .      \n"
							"   __/ \\__   \n"
							"   \\     /   \n"
							"   /.'o'.\\   \n"
							"    .o.'.    \n"
							"   .'.'o'.   \n"
							"  o'.o.'.o.  \n"
							" .'.o.'.'.o. \n"
							".o.'.o.'.o.'.\n"
							"   [_____]   \n"
							"    \\___/    ";

ShrubberyCreationForm::ShrubberyCreationForm() {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
		Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute(), src.getTarget()) {
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
	setSigned(src.getSigned());
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
		Form("ShrubberyCreation", 145, 137, target) {
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw(GradeTooLowException());
	if (!getSigned())
		throw(NotSigned());
	std::ofstream	newFile(std::string(std::string(getTarget()) + "_shrubbery").c_str());
	newFile << tree << std::endl;
	newFile.close();
	std::cout << getTarget() << "_shrubbery has been created !" << std::endl;
}