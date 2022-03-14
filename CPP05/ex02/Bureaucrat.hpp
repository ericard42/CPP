#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat {
	public:
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

		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat &operator=(Bureaucrat const &src);

		Bureaucrat(std::string const name, int grade);

		void 	incrementGrade();
		void 	decrementGrade();
		void 	signForm(Form &form);
		void 	executeForm(Form const &form);

		std::string const &getName() const;
		int 		getGrade() const;

	private:
		std::string const	_name;
		int	_grade;

};

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &src);

#endif
