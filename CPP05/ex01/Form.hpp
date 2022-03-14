#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
	public :
		class MyException : public std::exception {
			public :
				virtual const char *what() const throw() = 0;
		};
		class GradeTooHighException : public MyException {
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public MyException {
			public:
				const char *what() const throw();
		};
		class AlreadySignedException : public MyException {
			public:
				const char *what() const throw();
		};

		Form();
		~Form();
		Form(Form const &src);
		Form &operator=(Form const &src);

		Form(std::string const name, int const gradeToSign, int const gradeToExecute);

		void beSigned(Bureaucrat const &b);

		std::string const	&getName() const;
		bool getSigned() const;
		int	getGradeToSign() const;
		int	getGradeToExecute() const;

	private :
		bool	_signed;
		std::string const	_name;
		int	const _gradeToSign;
		int	const _gradeToExecute;

};

std::ostream &operator<<(std::ostream &stream, Form const &src);

#endif
